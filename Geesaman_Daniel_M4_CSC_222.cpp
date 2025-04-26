// Geesaman_Daniel_M4_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "policeOfficer.h"
#include "parkingTicket.h"
#include "parkingMeter.h"
#include "parkedCar.h"
using namespace std;

void scenario();
void scenario2();
void scenario3();
void scenario4();

int main()
{
    scenario();
    scenario2();
    scenario3();
    scenario4();
}

void scenario()
{
    parkedCar parkedCar{"Toyota", "Camry", "Red", "XYZ123", 30};
    parkingMeter parkingMeter{30};
    policeOfficer policeOfficer{"John Doe", 5678};
    policeOfficer.examineTime();
}

void scenario2()
{

}

void scenario3()
{

}

void scenario4()
{

}