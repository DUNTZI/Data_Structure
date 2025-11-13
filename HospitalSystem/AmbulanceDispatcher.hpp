#ifndef AMBULANCEDISPATCHER_HPP
#define AMBULANCEDISPATCHER_HPP

#include "DataStructures.hpp" // Needs the AmbulanceCircularQueue

class AmbulanceDispatcher {
private:
    AmbulanceCircularQueue ambulanceSchedule;
public:
    void showMenu();
};

#endif // AMBULANCEDISPATCHER_HPP