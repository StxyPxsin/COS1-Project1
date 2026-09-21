#include "TextNarrator.h"
#include <iostream>

void TextNarrator::printMainTitle() const {
    std::cout << "*********************************************************\n";
    std::cout << "               WELCOME TO ACEZOMBIES!!!!!                \n";
    std::cout << "*********************************************************\n";
}

// Outputs the background lore context text
void TextNarrator::printIntroSequence() const {
    std::cout << "\nOUR HERO IS HERE!!\n";
    std::cout << "Please save us from the Aces!\n";
    std::cout << "You are a courier hauling the structural viral cure code through infected cities.\n";
}

void TextNarrator::printCityIntro(const CityLevel& level) const {
    std::cout << "\n=========================================================\n";
    std::cout << " ARRIVING IN LEVEL: " << level.getName() << "\n";
    std::cout << "=========================================================\n";
    std::cout << level.getIntroStory() << "\n";
    std::cout << "Local Threat Multiplier: " << level.getZombieVariant() << " Aces\n";
}

void TextNarrator::printCityVictory(const CityLevel& level) const {
    std::cout << "\n---------------------------------------------------------\n";
    std::cout << "[>>>] SUCCESS! ESCAPING " << level.getName() << "...\n";
    std::cout << level.getVictoryStory() << "\n";
}

void TextNarrator::printPlayerDashboard(const Player& player, const CityLevel& level) const {
    std::cout << "\n---------------------------------------------------------\n";
    std::cout << "CITY: " << level.getName() << " | LOCAL COMPANION: " << level.getSurvivorName() << "\n";
    std::cout << "STATUS -> HP: " << player.getHp() << "% | Ammo: " << player.getAmmo() << " | Sector Supplies: " << player.getSupplies() << "/" << level.getSuppliesRequired() << "\n";
    std::cout << "---------------------------------------------------------\n";
}

// Displays available interactive choices
void TextNarrator::printMainMenu() const {
    std::cout << "MAIN STRATEGY COMMAND BOARD:\n";
    std::cout << "1. Venture out to Scavenge the sector ruins\n";
    std::cout << "2. Rest and bind structural wounds (-1 supply unit)\n";
    std::cout << "3. Drive to the next city level border checkpoint\n";
    std::cout << "4. Quit current operation completely and Exit game\n";
    std::cout << "Choose action (1-4): ";
}

void TextNarrator::printGameOverScreen(bool hasWon, const std::string& playerName) const {
    std::cout << "\n=========================================================\n";
    if (hasWon) {
        std::cout << "                  MISSION ACCOMPLISHED                   \n";
        std::cout << "=========================================================\n";
        std::cout << "Excellent work, " << playerName << ". The network link is active and humanity is saved!\n";
    }
    else {
        std::cout << "                     OPERATION FAILURE                   \n";
        std::cout << "=========================================================\n";
        std::cout << "The network code went silent. " << playerName << " fell to the Aces.\n";
    }
    std::cout << "=========================================================\n";
}
