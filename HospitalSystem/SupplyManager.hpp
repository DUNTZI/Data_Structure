#ifndef SUPPLYMANAGER_HPP
#define SUPPLYMANAGER_HPP

#include "DataStructures.hpp" // Needs the SupplyStack

class MedicalSupplyManager {
private:
    SupplyStack supplyStack;
public:
    void showMenu();
};

#endif // SUPPLYMANAGER_HPP