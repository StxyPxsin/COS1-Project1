#pragma once
#include <string>
#include <vector> // <-- [FIX] This tells the header what a std::vector is!

// Forward Declarations so the compiler knows these classes exist
class Player;
class CityLevel;

class TextNarrator {
public:
    void printMainTitle() const;
    void printPreGameMenu(const std::string& playerName) const;
    void printInventoryView(const Player& player) const;
    void printLevelSelectionMenu(const std::vector<CityLevel>& levels, int highestUnlockedLevel) const;
    void printCityIntro(const CityLevel& level) const;
    void printCityVictory(const CityLevel& level) const;
    void printPlayerDashboard(const Player& player, const CityLevel& level) const;
    void printInGameMenu() const;
    void printGameOverScreen(bool hasWon, const std::string& playerName) const;
};

