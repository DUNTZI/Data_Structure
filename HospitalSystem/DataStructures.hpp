#ifndef DATASTRUCTURES_HPP
#define DATASTRUCTURES_HPP

#include "DataModels.hpp"

// ----------------------------------------------------------------------------
// FOR ROLE 1: PatientQueue (Standard Queue)
// ----------------------------------------------------------------------------
struct PatientNode {
    Patient data;
    PatientNode* next;
};

class PatientQueue {
private:
    PatientNode *front, *rear;
public:
    PatientQueue();
    ~PatientQueue();
    bool isEmpty();
    void enqueue(Patient patient);
    bool dequeue();
    void display();
};

// ----------------------------------------------------------------------------
// FOR ROLE 2: SupplyStack (Standard Stack)
// ----------------------------------------------------------------------------
struct SupplyNode {
    Supply data;
    SupplyNode* next;
};

class SupplyStack {
private:
    SupplyNode* top;
public:
    SupplyStack();
    ~SupplyStack();
    bool isEmpty();
    void push(Supply supply);
    bool pop();
    void display();
};

// ----------------------------------------------------------------------------
// FOR ROLE 3: EmergencyPriorityQueue (Priority Queue)
// ----------------------------------------------------------------------------
struct EmergencyNode {
    EmergencyCase data;
    EmergencyNode* next;
};

class EmergencyPriorityQueue {
private:
    EmergencyNode* head;
public:
    EmergencyPriorityQueue();
    ~EmergencyPriorityQueue();
    bool isEmpty();
    void enqueue(EmergencyCase ec);
    bool dequeue();
    void display();
};

// ----------------------------------------------------------------------------
// FOR ROLE 4: AmbulanceCircularQueue (Circular Queue)
// ----------------------------------------------------------------------------
const int MAX_AMBULANCES = 5; // Fixed size for the rotation

class AmbulanceCircularQueue {
private:
    Ambulance ambulances[MAX_AMBULANCES];
    int front, rear, count;
public:
    AmbulanceCircularQueue();
    bool isEmpty();
    bool isFull();
    void enqueue(Ambulance ambulance);
    Ambulance dequeue();
    void display();
};

#endif // DATASTRUCTURES_HPP