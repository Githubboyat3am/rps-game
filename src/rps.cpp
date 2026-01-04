#include "../include/rps.h"
#include "cstdlib"
#include "ctime"
#include <cstring>
#include "iostream"

bool rps(char* userinput) {
    std::srand(std::time(nullptr));
    /*
    rock = 0
    paper = 1
    scissors = 2
    */
    int random = std::rand() %2;
    if (std::strcmp(userinput, "rock") == 0 && random == 1) {
        return false;
    }
    if (std::strcmp(userinput, "paper") == 0 && random == 2) {
        return false;
    }
    if (std::strcmp(userinput, "scissors") == 0 && random == 0) {
        return false;
    }

    if (std::strcmp(userinput, "rock") != 0 && std::strcmp(userinput, "paper") != 0 && std::strcmp(userinput, "scissors") != 0) {
        std::cerr << "Cheater Cheater Pumpkin eater, you thought buddy\n";
        
        return false;
    }
    return true;
}