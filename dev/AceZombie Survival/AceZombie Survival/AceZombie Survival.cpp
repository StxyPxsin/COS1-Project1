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


int getValidatedInput(int min, int max) {
    int input;
    while (true) {
        // If input is an integer and within valid numerical min/max parameters, return it immediately
        if (std::cin >> input && input >= min && input <= max) {
            return input;
        }
        // If code execution falls here, the entry was bad. Output warning and flush input stream flags.
        std::cout << "[!] Invalid action. Input a matching number (" << min << "-" << max << "): ";
        std::cin.clear();             // Clears stream internal error state flags
        std::cin.ignore(10000, '\n'); // Ignores and purges bad characters sitting in the buffer cache
    }
}

int main()
{
    std::srand(static_cast<unsigned int>(std::time(0)));

    // 1. POPULATE LEVEL:
    // Create instances of city stages
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
