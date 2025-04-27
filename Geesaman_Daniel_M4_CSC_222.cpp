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
    cout << "Scenario 1" << endl;
    parkedCar parkedCar{"Toyota", "Camry", "Red", "XYZ123", 30};
    parkingMeter parkingMeter{40};
    policeOfficer policeOfficer{"John Doe", 5678};
    policeOfficer.examineTime(parkingMeter, parkedCar);
    cout << endl<<endl;
}

void scenario2()
{
    cout << "Scenario 2" << endl;
    parkedCar parkedCar{ "Honda", "Accord", "Blue", "ABC987", 70 };
    parkingMeter parkingMeter{ 60 };
    policeOfficer policeOfficer{ "Jane Smith", 1234 };
    policeOfficer.examineTime(parkingMeter, parkedCar);
    cout << endl << endl;
}

void scenario3()
{
    cout << "Scenario 3" << endl;
    parkedCar parkedCar{ "Ford", "Mustang", "Black", "LMN456", 190 };
    parkingMeter parkingMeter{ 60 };
    policeOfficer policeOfficer{ "James Brown", 4321 };
    policeOfficer.examineTime(parkingMeter, parkedCar);
    cout << endl << endl;
}

void scenario4()
{    
    cout << "Scenario 4" << endl;
    parkedCar* paCar = new parkedCar("Hyundai", "Veloster", "Yellow", "PKH464", 50);
    parkingMeter* paMeter = new parkingMeter(60);
    policeOfficer policeOfficer{ "Jimmy Dean", 5768 };
    policeOfficer.examineTime(*paMeter, *paCar);
    delete paCar;
    delete paMeter;
    cout << endl << endl;

    paCar = new parkedCar("Ford", "F150", "Green", "LKN456", 240);
    paMeter = new parkingMeter(60);
    policeOfficer.examineTime(*paMeter, *paCar);
    delete paCar;
    delete paMeter;
    cout << endl << endl;

    paCar = new parkedCar("Honda", "Accord", "Grey", "CAE753", 400);
    paMeter = new parkingMeter(30);
    policeOfficer.examineTime(*paMeter, *paCar);
    delete paCar;
    delete paMeter;
    cout << endl << endl;
}