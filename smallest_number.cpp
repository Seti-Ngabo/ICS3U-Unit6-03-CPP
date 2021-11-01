// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This Program prints 10 random numbers with the smallest number.

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int lowestNumber(std::array<int, N> numbers) {
    // this function creates random numbers
    int smallest_number = numbers[0];

    // process
    for (int firstEachLoop : numbers) {
        if (firstEachLoop < smallest_number) {
            smallest_number = firstEachLoop;
        }
    }

    return smallest_number;
}

int main() {
    // This function prints random numbers
    std::array<int, 10> numbers;

    int randomNumbers;
    int smallest_number;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 100);

    for (int eachLoop = 0; eachLoop < 10; eachLoop++) {
        randomNumbers = idist(rgen);
        numbers[eachLoop] = randomNumbers;
        std::cout << "The random number " << eachLoop + 1 << " is: "
        << randomNumbers << std::endl;
    }

    // call functions
    smallest_number = lowestNumber(numbers);

    std::cout << "" << std::endl;
    std::cout << "The smallest number is: " << smallest_number << std::endl;

    std::cout << "\nDone." << std::endl;
}
