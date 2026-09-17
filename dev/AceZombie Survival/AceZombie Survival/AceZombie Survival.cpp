// AceZombie Survival.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>     
#include <string>
#include <cstdlib>    
#include <ctime>      
#include <memory>     
#include "Player.h"
#include "CityLevel.h"
#include "TextNarrator.h"

int getValidatedInput(int min, int max) {
    std::string userInput;
    int validatedNumber;

    while (true) {
        std::getline(std::cin, userInput);

        try {
            size_t charactersProcessed = 0;
            // Attempt conversion via string-to-integer library utility
            validatedNumber = std::stoi(userInput, &charactersProcessed);

            // Rejects trailing garbage text entries (e.g., typing "1abc" or "2 spaces")
            if (charactersProcessed == userInput.length() && validatedNumber >= min && validatedNumber <= max) {
                return validatedNumber; // Match confirmed, break filter loop
            }
        }
        catch (...) {
            // Catches any bad formats or integer overflow limit failures without crashing
        }
        std::cout << "[!] Invalid assignment option. Choose an option matching (" << min << "-" << max << "): ";
    }
}

int main() {
    // Seed our random roll tracking tables based on system calendar clocks
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Instantiate our custom UI layout narrator object tool container
    TextNarrator narrator;

    // 1. POPULATE STORY STAGE DATABASE ARRAYS
    std::vector<CityLevel> levels;
    levels.push_back(CityLevel(
        "Austin", "Marshal Davis",
        "The concrete is baked hot in Austin. You crawl through a window into a radio tower.\nThere you meet Marshal Davis, a tech broadcasting loops for survivors.",
        "Marshal Davis points his rifle out the window, clearing a path. 'Go, kid. I'll stay.'",
        "Runner", 3
    ));
    levels.push_back(CityLevel(
        "Chicago", "Dr. Helen Vance",
        "The high-rises are freezing, and the wind scratches through broken windows.\nIn a lab, you meet Dr. Helen Vance, a scientist tracking viral patterns.",
        "Dr. Vance packs her notes into your bag. 'The data is safe. Let's move.'",
        "Armored Riot", 5
    ));
    levels.push_back(CityLevel(
        "New York", "Captain Briggs",
        "Times Square is a maze of rusted yellow cabs and glowing red eyes.\nOn top of a checkpoint, you meet Captain Briggs, holding down the line.",
        "Captain Briggs blows the structural access bridges behind you. The mega-swarm falls. You made it.",
        "Goliath Swarm Master", 7
    ));

    // 2. RUN BOOT TITLES AND PROCESS VARIABLE REGISTRATION CREATION
    narrator.printMainTitle();

    std::cout << "Enter Name: ";
    std::string chosenName;
    std::getline(std::cin, chosenName);
    if (chosenName.empty()) chosenName = "Hero"; // Backstop default configuration value

    // Allocate our Player object instance with their preferred custom structural profile
    std::unique_ptr<Player> player = std::make_unique<Player>(chosenName);
    narrator.printIntroSequence();

    int currentLevelIndex = 0;
    bool isNewLevel = true;
    bool playerWantsToExit = false;

    while (player->getHp() > 0 && currentLevelIndex < static_cast<int>(levels.size()) && !playerWantsToExit) {
        CityLevel& activeCity = levels[currentLevelIndex]; // Pull active level details

        // Trigger entrance storyline updates on level shifts
        if (isNewLevel) {
            narrator.printCityIntro(activeCity);
            isNewLevel = false;
        }

        // Show player metrics and actions layout dashboard
        narrator.printPlayerDashboard(*player, activeCity);
        narrator.printMainMenu();

        int choice = getValidatedInput(1, 4); // Processes menu control configurations safely

        if (choice == 1) {
            // ACTION SELECTION 1: ACTION ENCOUNTER SCRIPTS PROMPTS
            std::cout << "\nYou step out to scavenge sector blocks alongside " << activeCity.getSurvivorName() << "...\n";
            int roll = std::rand() % 3; // Generates number 0, 1, or 2

            if (roll == 0) {
                int found = (std::rand() % 2) + 1;
                player->modifySupplies(found);
                std::cout << "[+] SUCCESS: Discovered emergency provisions! Gained " << found << " supply boxes.\n";
            }
            else if (roll == 1) {
                int found = (std::rand() % 4) + 2;
                player->modifyAmmo(found);
                std::cout << "[+] AMMO DROP: Recovered an ammunition pack! Loaded +" << found << " rounds.\n";
            }
            else {
                std::string fullZombieName = activeCity.getZombieVariant() + " Ace";
                std::cout << "[!] AMBUSH: A pack of frantic " << fullZombieName << " zombies attacks your position!\n";
                if (player->getAmmo() >= 3) {
                    player->modifyAmmo(-3);
                    int damage = (std::rand() % 15) + 5;
                    player->modifyHp(-damage);
                    std::cout << "[-] COMBAT: You burn 3 rounds downing the horde. Took " << damage << "% damage.\n";
                }
                else {
                    int damage = (std::rand() % 35) + 20;
                    player->modifyHp(-damage);
                    std::cout << "[X] OUT OF AMMO: Forced into hand-to-hand combat! Escaped, but took a brutal " << damage << "% damage from the Aces.\n";
                }
            }
        }
        else if (choice == 2) {
            // ACTION SELECTION 2: RESOURCE AND POOLS MODIFICATION RECOVERY LINES
            if (player->getSupplies() > 0) {
                player->modifySupplies(-1);
                player->modifyHp(30);
                std::cout << "\n[+] You consume a supply box and patch up your structural injuries. Restored 30% HP!\n";
            }
            else {
                std::cout << "\n[X] Action failed. You possess zero emergency supplies inside your bag.\n";
            }
        }
        else if (choice == 3) {
            // ACTION SELECTION 3: SECTOR THRESHOLD EVALUATIONS AND PROGRESSION INCREMENTORS
            if (player->getSupplies() >= activeCity.getSuppliesRequired()) {
                narrator.printCityVictory(activeCity);
                player->resetSuppliesForNewCity(); // Clear current inventory pools
                currentLevelIndex++;               // Shift to next city level reference database index
                isNewLevel = true;                 // Enable entrance message tracking flags for the next stage
            }
            else {
                std::cout << "\n[X] BARRIER LOCKED: You require " << activeCity.getSuppliesRequired()
                    << " supplies to map out an exit trail out of " << activeCity.getName() << "!\n";
            }
        }
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
