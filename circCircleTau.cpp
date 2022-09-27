// Copyright (c) 2022 Daniel Momoh All rights reserved.
//
// Created by: Daniel M
// Date: May 1, 2021
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " mm" << std::endl;
}