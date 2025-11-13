#include "SupplyManager.hpp"
#include "Utils.hpp"
#include <iostream>
#include <string>

void MedicalSupplyManager::showMenu() {
    int choice = 0;
    while (choice != 4) {
        std::cout << "\n--- Medical Supply Manager Menu ---\n";
        std::cout << "1. Add Supply Stock\n";
        std::cout << "2. Use 'Last Added' Supply\n";
        std::cout << "3. View Current Supplies\n";
        std::cout << "4. Return to Main Menu\n";
        
        choice = getIntInput("Enter your choice: ");

        switch (choice) {
            case 1: {
                Supply s;
                std::cout << "Enter Supply Type: ";
                std::getline(std::cin, s.type);
                std::cout << "Enter Batch: ";
                std::getline(std::cin, s.batch);
                s.quantity = getIntInput("Enter Quantity: ");
                supplyStack.push(s);
                pauseSystem();
                break;
            }
            case 2:
                supplyStack.pop();
                pauseSystem();
                break;
            case 3:
                supplyStack.display();
                pauseSystem();
                break;
            case 4:
                std::cout << "Returning to Main Menu...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                pauseSystem();
                break;
        }
    }
}