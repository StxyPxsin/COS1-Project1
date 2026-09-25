// AceZombie Survival.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <fstream>
#include "Player.h"
#include "CityLevel.h"
#include "TextNarrator.h"

// LECTURE 3 COMPLIANT SAFE INPUT VALIDATION
int getValidatedInput(int min, int max) {
    std::string userInput;
    int validatedNumber;
    while (true) {
        std::getline(std::cin, userInput);
        try {
            size_t processedChars = 0;
            validatedNumber = std::stoi(userInput, &processedChars);
            if (processedChars == userInput.length() && validatedNumber >= min && validatedNumber <= max) {
                return validatedNumber;
            }
        }
        catch (...) {}
        std::cout << "\n[!] SYSTEM WARNING: Unrecognized command. Choose a valid menu index (" << min << "-" << max << "): ";
    }
}

// PERSISTENT PROGRESS LOG SYSTEM
void saveGameProgress(const Player& player) {
    std::ofstream saveFile("savegame.txt");
    if (saveFile.is_open()) {
        saveFile << player.getHighestLevel() << "\n";
        saveFile << player.getHp() << "\n";
        saveFile << player.getAmmo() << "\n";
        saveFile << player.getMedkits() << "\n";
        saveFile << player.getMachetes() << "\n";
        saveFile << player.getRifles() << "\n";
        saveFile << player.getBoltCutters() << "\n";
        saveFile.close();
        std::cout << "\n[✓] Progress saved successfully to savegame.txt!\n";
    }
    else {
        std::cout << "\n[X] Error: Could not write save file framework data to system disk.\n";
    }
}

void loadGameProgress(Player& player) {
    std::ifstream saveFile("savegame.txt");
    if (saveFile.is_open()) {
        int level, hp, ammo, medkits, machetes, rifles, boltCutters;
        if (saveFile >> level >> hp >> ammo >> medkits >> machetes >> rifles >> boltCutters) {
            player.setHighestLevel(level);
            player.modifyHp(hp - player.getHp());
            player.modifyAmmo(ammo - player.getAmmo());
            player.modifyMedkits(medkits - player.getMedkits());
            player.modifyMachetes(machetes - player.getMachetes());
            player.modifyRifles(rifles - player.getRifles());
            player.modifyBoltCutters(boltCutters - player.getBoltCutters());
            std::cout << "\n[✓] Progress loaded successfully from savegame.txt!\n";
        }
        saveFile.close();
    }
    else {
        std::cout << "\n[X] UPLINK FAILURE: No local progress file discovered on this terminal disk.\n";
    }
}

// COMBAT SUBROUTINE ENGINE
void executeCombatScenario(Player& playerInstance, const CityLevel& targetCity) {
    std::string zName = targetCity.getZombieVariant() + " Ace";
    int activeZombieHp = targetCity.getBaseZombieHp() + (std::rand() % 20);
    std::cout << "\n[!!!] AMBUSH: An aggressive, snarling " << zName << " (" << activeZombieHp << " HP) lunges forward!\n";

    while (activeZombieHp > 0 && playerInstance.getHp() > 0) {
        std::cout << " Combat Stance -> Ace HP: " << activeZombieHp << " | Your HP: " << playerInstance.getHp() << "%\n";
        std::cout << " 1. Shoot with Assault Rifle (-1 Ammo)\n 2. Slash with Machete\n Choose stance: ";
        int fightChoice = getValidatedInput(1, 2);

        if (fightChoice == 1) {
            if (playerInstance.getAmmo() > 0 && playerInstance.getRifles() > 0) {
                playerInstance.modifyAmmo(-1);
                int strike = 25 + (std::rand() % 15);
                activeZombieHp -= strike;
                std::cout << " [*] Rifle shot blasts the Ace for " << strike << " damage!\n";
            }
            else {
                std::cout << "\n[X] WEAPON FAILURE: Click! You lack a Rifle or have zero Ammo remaining!\n";
            }
        }
        else {
            int strike = 12 + (std::rand() % 8);
            activeZombieHp -= strike;
            std::cout << " [*] Blade slash slices the Ace for " << strike << " damage.\n";
        }

        if (activeZombieHp > 0) {
            int incomingDmg = 8 + (std::rand() % 12);
            playerInstance.modifyHp(-incomingDmg);
            std::cout << " [X] The Ace bites back! Sustained -" << incomingDmg << "% damage.\n";
        }
    }
    if (playerInstance.getHp() > 0) std::cout << "[✓] Hostile Ace eliminated successfully.\n";
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    TextNarrator narrator;

    std::vector<CityLevel> levels;
    levels.push_back(CityLevel("Austin", "Marshal Davis", "Radio channels down.", "Austin chain blockades cut! Highway cleared.", "Runner", 30, 1, 0, 1));
    levels.push_back(CityLevel("Houston", "Sarah Connor", "Bayou tunnels flooded.", "Refinery bypass open.", "Acid Spitter", 45, 1, 1, 0));
    levels.push_back(CityLevel("Chicago", "Dr. Vance", "Subway frozen down.", "Train tracks switched.", "Armored Riot", 60, 2, 1, 0));
    levels.push_back(CityLevel("Denver", "Scout Miller", "Mountain pass blockades active.", "Tunnel charges blown.", "Frost Stalker", 80, 2, 2, 1));
    levels.push_back(CityLevel("New York", "Captain Briggs", "Times Square barricaded.", "Helipad reached.", "Goliath Swarm Master", 110, 3, 3, 2));

    narrator.printMainTitle();
    std::cout << "Enter Player Handle: ";
    std::string pName;
    std::getline(std::cin, pName);
    if (pName.empty()) pName = "Operator_Ace";

    std::unique_ptr<Player> player = std::make_unique<Player>(pName);

    int activeLevelIndex = 0;
    bool systemLobbyRunning = true;

    // PRE-GAME LOBBY CYCLE
    while (systemLobbyRunning && player->getHp() > 0) {
        narrator.printPreGameMenu(player->getName());
        int lobbyChoice = getValidatedInput(1, 6);

        if (lobbyChoice == 1) {
            activeLevelIndex = player->getHighestLevel();
            if (activeLevelIndex >= static_cast<int>(levels.size())) {
                std::cout << "\n[X] DEPLOYMENT DENIED: All regional campaign sectors are cleared!\n";
                continue;
            }

            bool playingFieldActive = true;
            bool triggerNewIntroText = true;

            // ACTIVE FIELD OPERATIONS CYCLE
            while (playingFieldActive && player->getHp() > 0) {
                CityLevel& activeCity = levels[activeLevelIndex];

                if (triggerNewIntroText) {
                    narrator.printCityIntro(activeCity);
                    triggerNewIntroText = false;
                }

                narrator.printPlayerDashboard(*player, activeCity);
                narrator.printInGameMenu();
                int gameAction = getValidatedInput(1, 4);

                if (gameAction == 1) {
                    std::cout << "\nSearching dark sector buildings with " << activeCity.getSurvivorName() << "...\n";
                    int dropRoll = std::rand() % 5;

                    if (dropRoll == 0) {
                        player->modifyMachetes(1);
                        std::cout << "[+] Found a sharp Steel Machete blade!\n";
                    }
                    else if (dropRoll == 1) {
                        player->modifyRifles(1);
                        std::cout << "[+] Found a functional Tactical Assault Rifle!\n";
                    }
                    else if (dropRoll == 2) {
                        player->modifyBoltCutters(1);
                        std::cout << "[+] Discovered heavy-duty Bolt Cutters embedded in an old utility grid!\n";
                    }
                    else if (dropRoll == 3) {
                        player->modifyAmmo(5);
                        player->modifyMedkits(1);
                        std::cout << "[+] Discovered specialized deployment crates! Gained +5 Ammo & +1 Medkit.\n";
                    }
                    else {
                        executeCombatScenario(*player, activeCity);
                    }
                }
                else if (gameAction == 2) {
                    if (player->getMedkits() > 0) {
                        player->modifyMedkits(-1);
                        player->modifyHp(45);
                        std::cout << "\n[+] Handled medical recovery treatment. Regenerated 45% HP.\n";
                    }
                    else {
                        std::cout << "\n[X] MEDICAL FAILURE: Your trauma pockets are completely empty!\n";
                    }
                }
                else if (gameAction == 3) {
                    if (player->getMachetes() >= activeCity.getRequiredMachetes() &&
                        player->getRifles() >= activeCity.getRequiredRifles() &&
                        player->getBoltCutters() >= activeCity.getRequiredBoltCutters()) {

                        player->modifyMachetes(-activeCity.getRequiredMachetes());
                        player->modifyRifles(-activeCity.getRequiredRifles());
                        player->modifyBoltCutters(-activeCity.getRequiredBoltCutters());

                        narrator.printCityVictory(activeCity);
                        playingFieldActive = false;

                        if (activeLevelIndex == player->getHighestLevel()) {
                            player->setHighestLevel(activeLevelIndex + 1);
                        }
                    }
                    else {
                        std::cout << "\n=========================================================================\n";
                        std::cout << "[X] EXTRACTION DENIED: The checkpoint perimeter line out of " << activeCity.getName() << " is completely locked down!\n";

                        if (activeCity.getName() == "Austin") {
                            std::cout << "Reason: Heavy high-security chain blockades encircle the border checkpoint gates.\n";
                            std::cout << "You cannot push past without clear tools to slash down guards and cut thick steel bounds!\n";
                        }
                        else if (activeCity.getName() == "Houston") {
                            std::cout << "Reason: Long-range acid variants have trapped the marshaling docks.\n";
                            std::cout << "You must secure firepower and structural clearance tools to survive the push through!\n";
                        }
                        else { std::cout << "Reason: Quarantine walls are blockaded. You lack the specified gear required to bridge the gap.\n"; }std::cout << "\nHardware Requirements Matrix to Unlock Border Path:\n"; std::cout << " * Machetes Required: " << activeCity.getRequiredMachetes() << " (You have: " << player->getMachetes() << ")\n"; std::cout << " * Rifles Required: " << activeCity.getRequiredRifles() << " (You have: " << player->getRifles() << ")\n"; std::cout << " * Bolt Cutters Required: " << activeCity.getRequiredBoltCutters() << " (You have: " << player->getBoltCutters() << ")\n"; std::cout << "=========================================================================\n"; std::cout << "\n[⚠️] SWARM ALERT: Your noisy breakout attempt alerted nearby swarms!\n"; executeCombatScenario(*player, activeCity);
                    }
                }
                else if (gameAction == 4) { std::cout << "\n[!] Retracting forces. Aborting active courier run back to HQ...\n"; playingFieldActive = false; }
            }if (player->getHp() <= 0) {
                narrator.printGameOverScreen(false, player->getName());
            }
            else if (player->getHighestLevel() >= static_cast<int>(levels.size())) {
                // [FIXED]: Added <int> type template specifiers to compile successfully
                narrator.printGameOverScreen(true, player->getName());
            }

            // [FIXED]: Closed out the deployment bracket cleanly before transitioning to lobbyChoice 3
            systemLobbyRunning = (player->getHp() > 0 && player->getHighestLevel() < static_cast<int>(levels.size()));
        }
        else if (lobbyChoice == 2) { narrator.printInventoryView(*player); std::cout << "Enter '1' to close inventory and return to HQ Lobby: "; getValidatedInput(1, 1); }
        if (lobbyChoice == 3) {
            narrator.printLevelSelectionMenu(levels, player->getHighestLevel());

            // [FIXED]: Added <int> type template specifiers here as well
            int selectTarget = getValidatedInput(0, static_cast<int>(levels.size()));

            if (selectTarget > 0 && selectTarget <= player->getHighestLevel() + 1) {
                int selectedLevelIdx = selectTarget - 1;
                std::cout << "\n[>>>] Simulation pathway set to " << levels[selectedLevelIdx].getName() << "!\n";

                bool simulationActive = true;
                bool triggerIntro = true;

                while (simulationActive && player->getHp() > 0) {
                    CityLevel& simCity = levels[selectedLevelIdx];
                    if (triggerIntro) {
                        narrator.printCityIntro(simCity);
                        triggerIntro = false;
                    }
                    narrator.printPlayerDashboard(*player, simCity);
                    std::cout << "Simulation Options:\n1. Search simulation blocks (+3 Ammo)\n2. Rest coordinates (+20% HP)\n3. Exit simulation\nChoose Action (1-3): ";

                    int simAct = getValidatedInput(1, 3);
                    if (simAct == 1) {
                        std::cout << "\nSearching simulation blocks...\n";
                        player->modifyAmmo(3);
                        std::cout << "[+] Found safe container reserves. Loaded +3 ammo rounds.\n";
                    }
                    else if (simAct == 2) {
                        player->modifyHp(20);
                        std::cout << "\n[+] Scoped resting coordinates. Restored 20% health.\n";
                    }
                    else if (simAct == 3) {
                        std::cout << "\n[✓] Simulation sector path exited cleanly.\n";
                        simulationActive = false;
                    }
                }

                if (player->getHp() <= 0) {
                    narrator.printGameOverScreen(false, player->getName());
                }
            }
            else if (selectTarget != 0) {
                std::cout << "\n[X] ACCESS RESTRICTED: Secure navigation channels to this city are completely dark.\n";
                std::cout << "You cannot jump to this region until you play the main campaign and clear preceding cities!\n";
            }
        }
        else if (lobbyChoice == 4) { loadGameProgress(*player); }
        else if (lobbyChoice == 5) { saveGameProgress(*player); }
        else if (lobbyChoice == 6) { systemLobbyRunning = false; std::cout << "\nClosing security uplink interface lines...\n"; }
    }if (player->getHp() <= 0) { std::cout << "\nTerminal connection disconnected. Operation terminated.\n"; }
    else { std::cout << "\nHQ Terminal deactivated cleanly. Goodbye.\n"; }return 0; }
        

        // Tips for Getting Started: 
        //   1. Use the Solution Explorer window to add/manage files
        //   2. Use the Team Explorer window to connect to source control
        //   3. Use the Output window to see build output and other messages
        //   4. Use the Error List window to view errors
        //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
        //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file