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
    // this function creates random numbers
    int maxNumber = 50;

    // process
    for (int firstEachLoop : randoms) {
        if (firstEachLoop < maxNumber) {
            maxNumber = firstEachLoop;
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
        std::uniform_int_distribution<int> idist(0, 50);
        randomNumbers = idist(rgen);
        Numbers[eachLoop] = randomNumbers;
        std::cout << "The random number " << eachLoop + 1 << " is: "
        << randomNumbers << std::endl;
    }

    // call functions
    finalLowest = lowestNumber(Numbers);

    std::cout << "" << std::endl;
    std::cout << "The smallest number is: " << finalLowest << std::endl;

    std::cout << "\nDone." << std::endl;
}
