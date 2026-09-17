#pragma once
#include <string>
#include "CityLevel.h"
class Player{    
private:
        std::string name;
        int hp;
        int maxHp;
        int ammo;
        int citySupplies;

public:
        // Setup a player using whatever name they typed in
        Player(std::string playerName);

        // Getters to view player state pools securely
        std::string getName() const;
        int getHp() const;
        int getAmmo() const;
        int getSupplies() const;

        // Modifiers (Setters) to change our values safely without breaking rules
        void modifyHp(int amount);
        void modifyAmmo(int amount);
        void modifySupplies(int amount);
        void resetSuppliesForNewCity(); // Empties inventory for the next stage

};

