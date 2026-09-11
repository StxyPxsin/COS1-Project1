// AceZombie Survival.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>     
#include <string>
#include <cstdlib>    
#include <ctime>      
#include <memory>     
#include "Player.h"
#include "CityLevel.h"
#include "TextNarrator.h"

int getValidatedInput(int min, int max) {
    int input;
    while (true) {
        if (std::cin >> input && input >= min && input <= max) {
            return input; // Correct matching choice, pass it out to the handler
        }
        std::cout << "[!] Invalid assignment option. Choose a option matching (" << min << "-" << max << "): ";
        std::cin.clear();             // Clears stream internal error condition flags
        std::cin.ignore(10000, '\n'); // Flushes remaining garbage memory bits inside the buffer
    }
}
int main() {
    // Seed our random roll tracking tables based on system calendar clocks
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Instantiate our custom UI layout narrator object tool container
    TextNarrator narrator;

    // 1. POPULATE STORY STAGE DATABASE ARRAYS
    std::vector<CityLevel> levels;
    levels.push_back(CityLevel(
        "Austin", "Marshal Davis",
        "The concrete is baked hot in Austin. You crawl through a window into a radio tower.\nThere you meet Marshal Davis, a tech broadcasting loops for survivors.",
        "Marshal Davis points his rifle out the window, clearing a path. 'Go, kid. I'll stay.'",
        "Runner", 3
    ));
    levels.push_back(CityLevel(
        "Chicago", "Dr. Helen Vance",
        "The high-rises are freezing, and the wind scratches through broken windows.\nIn a lab, you meet Dr. Helen Vance, a scientist tracking viral patterns.",
        "Dr. Vance packs her notes into your bag. 'The data is safe. Let's move.'",
        "Armored Riot", 5
    ));
    levels.push_back(CityLevel(
        "New York", "Captain Briggs",
        "Times Square is a maze of rusted yellow cabs and glowing red eyes.\nOn top of a checkpoint, you meet Captain Briggs, holding down the line.",
        "Captain Briggs blows the structural access bridges behind you. The mega-swarm falls. You made it.",
        "Goliath Swarm Master", 7
    ));

    // 2. RUN BOOT TITLES AND PROCESS VARIABLE REGISTRATION CREATION
    narrator.printMainTitle();

    std::cout << "Enter Name: ";
    std::string chosenName;
    std::getline(std::cin, chosenName);
    if (chosenName.empty()) chosenName = "Hero"; // Backstop default configuration value

    // Allocate our Player object instance with their preferred custom structural profile
    std::unique_ptr<Player> player = std::make_unique<Player>(chosenName);
    narrator.printIntroSequence();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
