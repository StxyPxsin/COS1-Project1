#pragma once
#include <string>

// This class represents a single level/city data profile structure.
class CityLevel {
private:
    std::string cityName;
    std::string survivorName;
    std::string introStory;
    std::string victoryStory;
    std::string zombieVariant;
    int baseZombieHp;

    // Scaling Progression: Harder item quotas required to pass the level
    int requiredMachetes;
    int requiredRifles;
    int requiredBoltCutters;

public:
    CityLevel(std::string name, std::string survivor, std::string intro, std::string victory,
        std::string zombieType, int zombieHp, int reqMachetes, int reqRifles, int reqBoltCutters);

    std::string getName() const;
    std::string getSurvivorName() const;
    std::string getZombieVariant() const;
    int getBaseZombieHp() const;
    int getRequiredMachetes() const;
    int getRequiredRifles() const;
    int getRequiredBoltCutters() const;
    std::string getIntroStory() const;
    std::string getVictoryStory() const;
};
