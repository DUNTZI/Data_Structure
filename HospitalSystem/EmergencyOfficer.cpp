#include "EmergencyOfficer.hpp"
#include "Utils.hpp"
#include <iostream>
#include <string>

void EmergencyDepartmentOfficer::showMenu() {
    int choice = 0;
    while (choice != 4) {
        std::cout << "\n--- Emergency Department Officer Menu ---\n";
        std::cout << "1. Log Emergency Case\n";
        std::cout << "2. Process Most Critical Case\n";
        std::cout << "3. View Pending Emergency Cases\n";
        std::cout << "4. Return to Main Menu\n";
        
        choice = getIntInput("Enter your choice: ");

        switch (choice) {
            case 1: {
                EmergencyCase ec;
                std::cout << "Enter Patient Name: ";
                std::getline(std::cin, ec.patientName);
                std::cout << "Enter Emergency Type (e.g., Cardiac Arrest): ";
                std::getline(std::cin, ec.emergencyType);
                ec.priority = getIntInput("Enter Priority Level (1 is highest): ");
                emergencyQueue.enqueue(ec);
                pauseSystem();
                break;
            }
            case 2:
                emergencyQueue.dequeue();
                pauseSystem();
                break;
            case 3:
                emergencyQueue.display();
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