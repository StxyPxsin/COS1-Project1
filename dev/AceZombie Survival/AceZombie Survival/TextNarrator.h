#pragma once
#include <string>
#include "Player.h"
#include "CityLevel.h"
class TextNarrator
{
public:
	void printMainTitle()const;
	
	void printWelcomeMessage(const std::string& playerName) const;
	
	void printCityIntro(const CityLevel& level) const;
	
	void printCityVictory(const CityLevel& level) const;
	
	void printPlayerDashboard(const Player& player, const CityLevel& level) const;
	
	void printActionMenu(const std::string& playerName) const;
	
	void printGameOverScreen(bool hasWon, const std::string& playerName) const;
};

