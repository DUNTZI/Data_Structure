#include "Utils.hpp"
#include <iostream>
#include <string>
#include <limits> // For numeric_limits

// Utility function to pause execution
void pauseSystem() {
    std::cout << "\nPress Enter to continue...";
    // Clear the input buffer from previous (e.g., getIntInput)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if(std::cin.rdbuf()->in_avail() > 0) {
         std::cin.get();
    }
    // Wait for user to press enter
    std::cin.get();
}

// Utility function for safe integer input
int getIntInput(const std::string& prompt) {
    int value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            // Check if there's trailing non-numeric input
            if (std::cin.peek() == '\n') {
                break; // Valid integer input
            } else {
                std::cout << "Invalid input. Please enter a number only.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        } else {
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    // Clear the newline character from the buffer before returning
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return value;
}