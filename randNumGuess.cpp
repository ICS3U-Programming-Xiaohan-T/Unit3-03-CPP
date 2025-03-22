// Copyright 2025 Xiaohan. All rights reserved.
// Created by Xiaohan
// Created on Mar 21, 2025
// This program generates a random number between 0 and 9

#include <cstdlib>
#include <iostream>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 0 and 9
    unsigned int seed = static_cast<unsigned int>(time(NULL));
    int correct_answer = rand_r(&seed) % 10;
    int user_guess = 0;

    // Prompt user for input
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> user_guess;
    // Check the user's guess
    if (user_guess == correct_answer) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong. The correct answer was: "
                  << correct_answer << std::endl;
    }

    std::cout << "Done!" << std::endl;
}
