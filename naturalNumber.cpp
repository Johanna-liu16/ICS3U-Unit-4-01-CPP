// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    std::string stringNumber;
    int intNumber;
    int loopCounter = 0;
    int answer = 0;

    // input
    std::cout << "This program adds consecutive integers." << std::endl;
    std::cout << "Enter amount of integers to be added: ";
    std::cin >> stringNumber;

    // process and output
    try {
        intNumber = std::stoi(stringNumber);
        while (loopCounter < intNumber) {
            loopCounter = loopCounter + 1;
            answer = answer + loopCounter;
        }
        std::cout << "The answer is " << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
