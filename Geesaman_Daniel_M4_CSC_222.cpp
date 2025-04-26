// Geesaman_Daniel_M4_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "policeOffice.h"
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
    parkedCar parkedCar("Toyota", "Camry", "Red", "XYZ123", 30);
    parkingMeter parkingMeter(40);
    ticketOfficer ticketOfficer("John Doe", 5678);
    ticketOfficer.isTimeExpired();
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