#pragma once
#include <string>

// This class tracks and controls the player's attributes and localized tactical inventory pools.
class Player {
private:
    std::string name;
    int hp;
    int maxHp;
    int highestUnlockedLevel; // Progress checkpoint tracking marker

    // Core Tactical Combat Inventory Properties
    int ammo;
    int medkits;
    int machetes;
    int rifles;
    int boltCutters;

public:
    Player(std::string playerName);

    std::string getName() const;
    int getHp() const;
    int getHighestLevel() const;
    int getAmmo() const;
    int getMedkits() const;
    int getMachetes() const;
    int getRifles() const;
    int getBoltCutters() const;

    void setHighestLevel(int levelIndex);
    void modifyHp(int amount);
    void modifyAmmo(int amount);
    void modifyMedkits(int amount);
    void modifyMachetes(int amount);
    void modifyRifles(int amount);
    void modifyBoltCutters(int amount);
};
