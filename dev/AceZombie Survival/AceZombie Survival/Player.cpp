#include "Player.h"
#include <algorithm>

Player::Player(std::string playerName)
    : name(playerName), hp(100), maxHp(100), highestUnlockedLevel(0), ammo(10), medkits(2), machetes(1), rifles(0) {
}

std::string Player::getName() const { 
    return name; }
int Player::getHp() const { 
    return hp; }
int Player::getHighestLevel() const {
    return highestUnlockedLevel; }
int Player::getAmmo() const { 
    return ammo; }
int Player::getMedkits() const {
    return medkits; }
int Player::getMachetes() const {
    return machetes; }
int Player::getRifles() const {
    return rifles; }

void Player::setHighestLevel(int levelIndex) { 
    highestUnlockedLevel = levelIndex; }

void Player::modifyHp(int amount) {
    hp = std::max(0, std::min(maxHp, hp + amount)); }

void Player::modifyAmmo(int amount) { 
    ammo = std::max(0, ammo + amount); }

void Player::modifyMedkits(int amount) {
    medkits = std::max(0, medkits + amount); }

void Player::modifyMachetes(int amount) {
    machetes = std::max(0, machetes + amount); }

void Player::modifyRifles(int amount) { 
    rifles = std::max(0, rifles + amount); }
