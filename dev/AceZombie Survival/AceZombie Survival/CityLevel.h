#pragma once
#include <string>

class CityLevel {
private:
    std::string cityName;
    std::string survivorName;
    std::string introStory;
    std::string victoryStory;
    std::string zombieVariant;
    int baseZombieHp;
    // Harder mechanics: Level requirements
    int requiredMachetes;
    int requiredRifles;

public:
    CityLevel(std::string name, std::string survivor, std::string intro, std::string victory,
        std::string zombieType, int zombieHp, int reqMachetes, int reqRifles);
   
    std::string getName() const;
    std::string getSurvivorName() const;
    std::string getZombieVariant() const;
    int getBaseZombieHp() const;
    int getRequiredMachetes() const;
    int getRequiredRifles() const;
    std::string getIntroStory() const;
    std::string getVictoryStory() const;
};

