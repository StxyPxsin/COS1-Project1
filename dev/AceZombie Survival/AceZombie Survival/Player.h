#pragma once
#pragma once
#include <string>

class Player {
private:
    std::string name;
    int hp;
    int maxHp;
    int highestUnlockedLevel;

    int ammo;
    int medkits;
    int machetes;
    int rifles;
    int boltCutters; // [NEW FIELD]

public:
    Player(std::string playerName);

    std::string getName() const;
    int getHp() const;
    int getHighestLevel() const;
    int getAmmo() const;
    int getMedkits() const;
    int getMachetes() const;
    int getRifles() const;
    int getBoltCutters() const; // [NEW GETTER]

    void setHighestLevel(int levelIndex);
    void modifyHp(int amount);
    void modifyAmmo(int amount);
    void modifyMedkits(int amount);
    void modifyMachetes(int amount);
    void modifyRifles(int amount);
    void modifyBoltCutters(int amount); // [NEW MUTATOR]
};

