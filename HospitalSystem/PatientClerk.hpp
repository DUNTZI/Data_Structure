#ifndef PATIENTCLERK_HPP
#define PATIENTCLERK_HPP

#include "DataStructures.hpp" // Needs the PatientQueue

class PatientAdmissionClerk {
private:
    PatientQueue patientQueue;
public:
    void showMenu();
};

#endif // PATIENTCLERK_HPP