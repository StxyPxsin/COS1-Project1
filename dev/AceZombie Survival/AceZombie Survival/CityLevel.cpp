#include "CityLevel.h"
#include <iostream>

//Assigns incoming parameters to the private member variables
CityLevel::CityLevel(std::string name, std::string survivor, std::string intro, std::string victory, std::string zombieType, int reqSupplies)
    : cityName(name), survivorName(survivor), introStory(intro), victoryStory(victory), zombieVariant(zombieType), suppliesRequired(reqSupplies) {
}
//Return the requested private variables to parts of the code outside the class
std::string CityLevel::getName() const { return cityName; }
std::string CityLevel::getSurvivorName() const { return survivorName; }
std::string CityLevel::getZombieVariant() const { return zombieVariant; }
int CityLevel::getSuppliesRequired() const { return suppliesRequired; }

void CityLevel::printIntro() const {
    std::cout << "\n=========================================================\n";
    std::cout << " ARRIVING IN: " << cityName << "\n";
    std::cout << "=========================================================\n";
    std::cout << introStory << "\n";
    std::cout << "Local Sector Threat: " << zombieVariant << " Ace Zombies\n";
}

void CityLevel::printVictory() const {
    std::cout << "\n---------------------------------------------------------\n";
    std::cout << "[>>>] ESCAPING " << cityName << "...\n";
    std::cout << victoryStory << "\n";
    std::cout << "---------------------------------------------------------\n";
}