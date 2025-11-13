#include <iostream>

// Include all the individual role headers
#include "PatientClerk.hpp"
#include "SupplyManager.hpp"
#include "EmergencyOfficer.hpp"
#include "AmbulanceDispatcher.hpp"

// Include the utility header for the main menu's input/pause
#include "Utils.hpp" 

int main() {
    // Instantiate one object for each role
    PatientAdmissionClerk clerk;
    MedicalSupplyManager supplyManager;
    EmergencyDepartmentOfficer edOfficer;
    AmbulanceDispatcher dispatcher;

    int choice = 0;
    while (choice != 5) {
        std::cout << "\n============================================\n";
        std::cout << "   Hospital Patient Care Management System   \n";
        std::cout << "============================================\n";
        std::cout << "Main Menu:\n";
        std::cout << "1. Patient Admission Clerk\n";
        std::cout << "2. Medical Supply Manager\n";
        std::cout << "3. Emergency Department Officer\n";
        std::cout << "4. Ambulance Dispatcher\n";
        std::cout << "5. Exit System\n";
        
        choice = getIntInput("Select your role/module: ");

        switch (choice) {
            case 1:
                clerk.showMenu();
                break;
            case 2:
                supplyManager.showMenu();
                break;
            case 3:
                edOfficer.showMenu();
                break;
            case 4:
                dispatcher.showMenu();
                break;
            case 5:
                std::cout << "Exiting system. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please select from 1-5.\n";
                pauseSystem();
                break;
        }
    }

    return 0;
}