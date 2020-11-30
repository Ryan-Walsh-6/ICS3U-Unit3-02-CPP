// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on November 30 2020
// this program checks to see if the number guessed is the magic number

#include <iostream>

int main() {
    // this program checks to see if the number guessed is the magic number
    const int MAGIC_NUMBER = 5;
    int guessed_number;

    // input
    std::cout << "Enter a number(between 0-9)):";
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // process
    if (guessed_number == MAGIC_NUMBER) {
        // output
        std::cout << "Congratulations! You guessed the right number!";
    }
}
