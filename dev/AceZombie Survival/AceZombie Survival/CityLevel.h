#pragma once
#include <string>
class CityLevel
{
private:
    std::string cityName;
    std::string survivorName;
    std::string introStory;
    std::string victoryStory;
    std::string zombieVariant;
    int suppliesRequired;
public:
    //Constructor
    CityLevel(std::string name, std::string survivor, std::string intro, std::string victory, std::string zombieType, int reqSupplies);

    //Getters
    std::string getName() const;
    std::string getSurvivorName() const;
    std::string getZombieVariant() const;
    int getSuppliesRequired() const;

    //outputs story details 
    void printIntro() const;
    void printVictory() const;
};
