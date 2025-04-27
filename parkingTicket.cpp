#include "policeOfficer.h"
#include "parkingTicket.h"
#include "parkingMeter.h"
#include "parkedCar.h"
#include <iostream>
#include <string>
using namespace std;

void parkingTicket::printTicket()
{
	cout << "*** Parking Ticket ***" << endl;
	cout << "Officer " << officerName << " Badge Number " << badgeNum << endl;
	cout << "Vehicle License Number: " << liNum << endl;
	cout << "Make: " << make << " Model: " << model << " Color: " << color << endl;
	cout << "Meter Minutes: " << paidTime << " Minutes Parked: " << parkedTime << endl;
	cout << "Parking Fee: $" << reportFine(paidTime, parkedTime);
}

int parkingTicket::reportFine(int paidTime, int parkedTime)
{
	parkingMeter paMeter;
	parkedCar paCar;
	int cost = 25;
	int illegalTime;
	int additCharge;
	illegalTime = (paidTime - parkedTime);
	additCharge = illegalTime / 60;
	cost += abs(additCharge * 10);
	return cost;
}