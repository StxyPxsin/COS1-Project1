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
	Player(std::string playerName);
	std::string getName() const;
	int getHp() const;
	int getAmmo() const;
	int getSupplies() const;

	void modifyHp(int amount);
	void modifyAmmo(int amount);
	void modifySupplies(int amount);
	void resetSuppliesForNewCity();

	void printStatus(const CityLevel& currentCity) const;



};

