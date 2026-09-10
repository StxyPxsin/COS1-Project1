#include "player.h"
#include <iostream>
#include <algorithm>


Player::Player(std::string playerName) 
	: name(playerName),hp(100), maxHp(100), ammo(6),citySupplies(1){}

std::string Player::getName()const { 
	return name; 
}
int Player::getHp() const { 
	return hp;
}
int Player::getAmmo() const {
	return ammo; 
}
int Player::getSupplies() const { 
	return citySupplies; 
}

void Player::modifyHp(int amount) {
	hp = std::max(0, std::min(maxHp, hp + amount));
}
void Player::modifyAmmo(int amount) {
	ammo = std::max(0, ammo + amount);
}	
void Player::modifySupplies(int amount) {
		citySupplies = std::max(0, citySupplies + amount);
	}
void Player::resetSuppliesForNewCity() {
	citySupplies = 0;
}
