#include "CityLevel.h"
#include <iostream>

//Assigns incoming parameters to the private member variables
CityLevel::CityLevel(std::string name, std::string survivor, std::string intro, std::string victory, std::string zombieType, int reqSupplies)
    : cityName(name), survivorName(survivor), introStory(intro), victoryStory(victory), zombieVariant(zombieType), suppliesRequired(reqSupplies) {
}

// Simple matching getter operations
std::string CityLevel::getName() const {
    return cityName; }

std::string CityLevel::getSurvivorName() const { 
    return survivorName; }

std::string CityLevel::getZombieVariant() const { 
    return zombieVariant; }

int CityLevel::getSuppliesRequired() const {
    return suppliesRequired; }

std::string CityLevel::getIntroStory() const {
    return introStory; }

std::string CityLevel::getVictoryStory() const {
    return victoryStory; }