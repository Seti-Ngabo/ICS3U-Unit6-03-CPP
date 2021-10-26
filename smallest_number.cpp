// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This Program prints 10 random numbers with the smallest number.

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int lowestNumber(std::array<int, N> randoms) {
    // this function creats random numbers
    int maxNumber = 100;
    int startingPoint = 0;

    // process
    for (int eachLoop : randoms) {
        startingPoint += 1;
        std::cout << "The random number " << startingPoint << " is: "
        << eachLoop << std::endl;

        if (eachLoop < maxNumber) {
            maxNumber = eachLoop;
        }
    }

    return maxNumber;
}

int main() {
    // This function prints random numbers
    std::array<int, 10> Numbers;

    int eachLoop;

    int randomNumbers;
    int finalLowest;

    for (eachLoop = 0; eachLoop < 10; eachLoop++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        randomNumbers = idist(rgen);
        Numbers[eachLoop] = randomNumbers;
    }

    // call functions
    finalLowest = lowestNumber(Numbers);

    std::cout << "" << std::endl;
    std::cout << "The smallest number is: " << finalLowest << std::endl;

    std::cout << "\nDone." << std::endl;
}
