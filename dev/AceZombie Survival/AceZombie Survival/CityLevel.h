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

    // Harder Item Quotas: Required to clear the level gates
    int requiredMachetes;
    int requiredRifles;
    int requiredBoltCutters; // [NEW FIELD]

public:
    CityLevel(std::string name, std::string survivor, std::string intro, std::string victory,
        std::string zombieType, int zombieHp, int reqMachetes, int reqRifles, int reqBoltCutters);

    std::string getName() const;
    std::string getSurvivorName() const;
    std::string getZombieVariant() const;
    int getBaseZombieHp() const;
    int getRequiredMachetes() const;
    int getRequiredRifles() const;
    int getRequiredBoltCutters() const; // [NEW GETTER]
    std::string getIntroStory() const;
    std::string getVictoryStory() const;
};
