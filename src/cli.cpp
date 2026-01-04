#include "../include/rps.h"
#include "iostream"
#include <cstdlib>
#include <cstring>

// 



int main(int argc, char* argv[]) {
    std::cout << "welcome to lucas's first program in cpp :-) \n";
    if (argc < 2) {
        std::cerr << "to little arguments :-(";
        return 1;
    }

    if (std::strcmp(argv[1], "play") == 0) {
        if (argc == 4 && std::strcmp(argv[3], "-alot") == 0) {
            while (true) {
                if (rps(argv[2])) {
                    std::cout << "You win!!";
                } else {
                    std::cout << "You lose!!";
                }
            }
        } else {
            if (rps(argv[2])) {
                std::cout << "You win!!\n";
            } else {
                std::cout << "You lose!!\n";
            }
        }
    }

    return 0;
}