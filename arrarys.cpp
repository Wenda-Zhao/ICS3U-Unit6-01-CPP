// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for arrarys

#include <iostream>
#include <random>

int main() {
    // This function is for arrarys

    int my_numbers[10];
    float some_variable_plus = 0;
    int some_variable;
    int loop_number;
    float average;

    // process
    for (loop_number = 0; loop_number < 10; loop_number++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [0,100]
        some_variable = idist(rgen);
        my_numbers[loop_number] = some_variable;
        some_variable_plus = some_variable_plus + some_variable;
    }
    average = some_variable_plus/10;
    for (loop_number = 0; loop_number < 10; loop_number++) {
        std::cout << "The number is: " << my_numbers[loop_number] << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "The average is: " << average;
}
