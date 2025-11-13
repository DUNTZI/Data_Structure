#ifndef DATAMODELS_HPP
#define DATAMODELS_HPP

#include <string>

// Data structure for Role 1: Patient Admission Clerk
struct Patient {
    int id;
    std::string name;
    std::string condition;
};

// Data structure for Role 2: Medical Supply Manager
struct Supply {
    std::string type;
    int quantity;
    std::string batch;
};

// Data structure for Role 3: Emergency Department Officer
struct EmergencyCase {
    std::string patientName;
    std::string emergencyType;
    int priority; // Lower number = higher priority
};

// Data structure for Role 4: Ambulance Dispatcher
struct Ambulance {
    std::string licensePlate;
    std::string driverName;
};

#endif // DATAMODELS_HPP