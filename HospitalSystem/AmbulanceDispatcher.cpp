#include "AmbulanceDispatcher.hpp"
#include "Utils.hpp"
#include <iostream>
#include <string>

void AmbulanceDispatcher::showMenu() {
    int choice = 0;
    while (choice != 4) {
        std::cout << "\n--- Ambulance Dispatcher Menu ---\n";
        std::cout << "1. Register Ambulance\n";
        std::cout << "2. Rotate Ambulance Shift\n";
        std::cout << "3. Display Ambulance Schedule\n";
        std::cout << "4. Return to Main Menu\n";
        
        choice = getIntInput("Enter your choice: ");

        switch (choice) {
            case 1: {
                if (ambulanceSchedule.isFull()) {
                    std::cout << "Ambulance fleet is full (Max " << MAX_AMBULANCES << "). Cannot add more.\n";
                } else {
                    Ambulance a;
                    std::cout << "Enter License Plate: ";
                    std::getline(std::cin, a.licensePlate);
                    std::cout << "Enter Driver Name: ";
                    std::getline(std::cin, a.driverName);
                    ambulanceSchedule.enqueue(a);
                }
                pauseSystem();
                break;
            }
            case 2: {
                if (ambulanceSchedule.isEmpty()) {
                    std::cout << "No ambulances to rotate.\n";
                } else {
                    Ambulance rotatedAmbulance = ambulanceSchedule.dequeue();
                    if(rotatedAmbulance.licensePlate != "") {
                        std::cout << "Ambulance " << rotatedAmbulance.licensePlate
                                  << " completed shift and is moving to the back of the queue.\n";
                        ambulanceSchedule.enqueue(rotatedAmbulance);
                    }
                }
                pauseSystem();
                break;
            }
            case 3:
                ambulanceSchedule.display();
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