#ifndef EMERGENCYOFFICER_HPP
#define EMERGENCYOFFICER_HPP

#include "DataStructures.hpp" // Needs the EmergencyPriorityQueue

class EmergencyDepartmentOfficer {
private:
    EmergencyPriorityQueue emergencyQueue;
public:
    void showMenu();
};

#endif // EMERGENCYOFFICER_HPP