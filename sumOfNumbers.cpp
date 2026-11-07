// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 06,11,2026
// This program asks user for an integer input.
// It checks if the integer is greater than the counter, if true
// it adds 1 to the counter. This creates a loop which it will track.
// The program then gives the sum of the numbers from 0 to the counter
// after the loop ends.

#include <string>
#include <iostream>

int main() {
    // declare variables
    int total, counter, userInt;
    std::string userNum;

    // set a total for the sum of the numbers
    total = 0;

    // set a counter for the loop
    counter = 0;

    // get user's int input
    std::cout <<"Enter a positive integer: ";
    std::cin >> userNum;

    // try to cast the string input to a float for decimal input
    try {
        float userFloat = std::stof(userNum);

        // check if it has a decimal component, or if it is 0 or negative
        if (userFloat != static_cast<int>(userFloat) || userFloat <= 0) {
            std::cout << "Please enter a positive whole number\n";
            // Safely skips the rest of the loop iteration
            return 0;
        }

        // If it passes, safely convert it to your integer variable
        userInt = static_cast<int>(userFloat);
        while (userInt >= counter) {
            std::cout <<"Tracking " <<counter << " times through the loop \n";
            total = total + counter;
            counter = counter + 1;
            } std::cout <<"The sum of the numbers from 0-";
            std::cout <<userInt <<" is " <<total;
        } catch (std::invalid_argument) {
        std::cout <<userNum <<" is not a valid integer input";
    }
}
