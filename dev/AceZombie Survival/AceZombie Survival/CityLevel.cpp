#include "CityLevel.h"

CityLevel::CityLevel(std::string name, std::string survivor, std::string intro, std::string victory,
    std::string zombieType, int zombieHp, int reqMachetes, int reqRifles)
    : cityName(name), survivorName(survivor), introStory(intro), victoryStory(victory),
    zombieVariant(zombieType), baseZombieHp(zombieHp), requiredMachetes(reqMachetes), requiredRifles(reqRifles) {
}

std::string CityLevel::getName() const 
{ 
    return cityName; }

std::string CityLevel::getSurvivorName() const 
{ 
    return survivorName; }

std::string CityLevel::getZombieVariant() const
{
    return zombieVariant; }

int CityLevel::getBaseZombieHp() const 
{ 
    return baseZombieHp; }

int CityLevel::getRequiredMachetes() const 
{ 
    return requiredMachetes; }

int CityLevel::getRequiredRifles() const 
{ 
    return requiredRifles; }

std::string CityLevel::getIntroStory() const 
{ 
    return introStory; }

std::string CityLevel::getVictoryStory() const 
{ 
    return victoryStory; }
