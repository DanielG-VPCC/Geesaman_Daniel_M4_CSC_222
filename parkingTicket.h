#pragma once
#include "policeOfficer.h"
#include "parkingMeter.h"
#include "parkedCar.h"
#include <iostream>
#include <string>
using namespace std;

class parkingTicket
{
private:
	string make;
	string model;
	string color;
	string liNum;
	string officerName;
	double badgeNum;
	int paidTime;
	int parkedTime;
public:
	parkingTicket(parkingMeter pMeter, parkedCar pCar, string of, double ba)
	{
		make = pCar.getMake();
		model = pCar.getModel();
		color = pCar.getColor();
		liNum = pCar.getNum();
		officerName = of;
		badgeNum = ba;
		paidTime = pMeter.getPaidTime();
		parkedTime = pCar.getParkedTime();
	}
	void printTicket();
	int reportFine(int paidTime, int parkedTime);
};