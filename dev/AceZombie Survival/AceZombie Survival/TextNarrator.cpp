#include "TextNarrator.h"
#include <iostream>
#include <vector>

void TextNarrator::printMainTitle() const {
    std::cout << "*********************************************************\n";
    std::cout << "               WELCOME TO ACEZOMBIES SECTOR ONE          \n";
    std::cout << "*********************************************************\n";
}

void TextNarrator::printPreGameMenu(const std::string& playerName) const {
    std::cout << "\n=========================================================\n";
    std::cout << " PRE-GAME HQ LOBBY - OPERATOR: " << playerName << "\n";
    std::cout << "=========================================================\n";
    std::cout << "1. Launch Active Survival Mission Run\n";
    std::cout << "2. Inspect Storage Locker Inventory\n";
    std::cout << "3. Open Regional Level Select Screen (Replay Passed Zones)\n";
    std::cout << "4. Restore Previous Progress (Load savegame.txt File)\n";
    std::cout << "5. Backup Current Progress (Write to savegame.txt File)\n";
    std::cout << "6. Shut Down Terminal and Exit App\n";
    std::cout << "Choose action (1-6): ";
}

void TextNarrator::printInventoryView(const Player& player) const {
    std::cout << "\n=========================================================\n";
    std::cout << "            CURRENT SURVIVAL GEAR STORAGE STATUS          \n";
    std::cout << "=========================================================\n";
    std::cout << " [Vitals Health Pool] : " << player.getHp() << "%\n";
    std::cout << " [Rifle Firearm Ammo] : " << player.getAmmo() << " Rounds\n";
    std::cout << " [Field Trauma Kits]  : " << player.getMedkits() << " Packs\n";
    std::cout << " [Steel Machetes]     : " << player.getMachetes() << " Blades\n";
    std::cout << " [Tactical Assault]   : " << player.getRifles() << " Long Guns\n";
    std::cout << "---------------------------------------------------------\n";
    std::cout << " Press any key choice number to return to Lobby...\n";
}

void TextNarrator::printLevelSelectionMenu(const std::vector<CityLevel>& levels, int highestUnlocked) const {
    std::cout << "\n=========================================================\n";
    std::cout << "            REGIONAL LEVEL COURIER MISSION SELECT         \n";
    std::cout << "=========================================================\n";
    for (size_t i = 0; i < levels.size(); ++i) {
        std::cout << " Level " << i + 1 << ": " << levels[i].getName();
        if (static_cast<int>(i) <= highestUnlocked) {
            std::cout << " [UNLOCKED] (Req: " << levels[i].getRequiredMachetes() << " Machetes, "
                << levels[i].getRequiredRifles() << " Rifles)\n";
        }
        else {
            std::cout << " [LOCKED - Complete previous zones to clear pathway]\n";
        }
    }
    std::cout << " Choose a level or input 0 to cancel: ";
}

void TextNarrator::printCityIntro(const CityLevel& level) const {
    std::cout << "\n=========================================================\n";
    std::cout << " CURRENT OPERATIONS AREA: " << level.getName() << "\n";
    std::cout << "=========================================================\n";
    std::cout << level.getIntroStory() << "\n";
    std::cout << " Threat: " << level.getZombieVariant() << " Aces (Base HP: " << level.getBaseZombieHp() << ")\n";
}

void TextNarrator::printCityVictory(const CityLevel& level) const {
    std::cout << "\n[>>>] ZONE CONQUERED! SECURING PATHWAY OUT OF " << level.getName() << "...\n";
    std::cout << level.getVictoryStory() << "\n";
}

void TextNarrator::printPlayerDashboard(const Player& player, const CityLevel& level) const {
    std::cout << "\n---------------------------------------------------------\n";
    std::cout << " ZONE: " << level.getName() << " | ASSISTING COMPANION: " << level.getSurvivorName() << "\n";
    std::cout << " INVENTORY -> HP: " << player.getHp() << "% | Ammo: " << player.getAmmo()
        << " | Machetes: " << player.getMachetes() << "/" << level.getRequiredMachetes()
        << " | Rifles: " << player.getRifles() << "/" << level.getRequiredRifles() << "\n";
    std::cout << "---------------------------------------------------------\n";
}

void TextNarrator::printInGameMenu() const {
    std::cout << "Tactical In-Field Options:\n";
    std::cout << "1. Scavenge Abandoned Safehouses with Companion\n";
    std::cout << "2. Administer Field Trauma Medkit (-1 Kit)\n";
    std::cout << "3. Attempt to Break Out through Checkpoint Gates to Escape City\n";
    std::cout << "Choose Action (1-3): ";
}

void TextNarrator::printGameOverScreen(bool hasWon, const std::string& playerName) const {
    std::cout << "\n=========================================================\n";
    if (hasWon) {
        std::cout << "            CRITICAL SUCCESS: COURIER RUN MET             \n";
        std::cout << "=========================================================\n";
        std::cout << "Excellent job " << playerName << ". The cure structural sequence is safe.\n";
    }
    else {
        std::cout << "                     SYSTEM TERMINATION                   \n";
        std::cout << "=========================================================\n";
        std::cout << "Operator " << playerName << " failed tracking signs. Sector compromised.\n";
    }
    std::cout << "=========================================================\n";
}

