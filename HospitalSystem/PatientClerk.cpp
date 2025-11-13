#include "PatientClerk.hpp"
#include "Utils.hpp" // Needs the helper functions
#include <iostream>
#include <string>

void PatientAdmissionClerk::showMenu() {
    int choice = 0;
    while (choice != 4) {
        std::cout << "\n--- Patient Admission Clerk Menu ---\n";
        std::cout << "1. Admit Patient\n";
        std::cout << "2. Discharge Patient (Earliest)\n";
        std::cout << "3. View Patient Queue\n";
        std::cout << "4. Return to Main Menu\n";
        
        choice = getIntInput("Enter your choice: "); // From Utils.cpp

        switch (choice) {
            case 1: {
                Patient p;
                p.id = getIntInput("Enter Patient ID: ");
                std::cout << "Enter Patient Name: ";
                std::getline(std::cin, p.name);
                std::cout << "Enter Patient Condition: ";
                std::getline(std::cin, p.condition);
                patientQueue.enqueue(p);
                pauseSystem(); // From Utils.cpp
                break;
            }
            case 2:
                patientQueue.dequeue();
                pauseSystem();
                break;
            case 3:
                patientQueue.display();
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