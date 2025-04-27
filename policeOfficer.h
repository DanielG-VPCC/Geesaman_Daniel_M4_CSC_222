#pragma once
#include "parkingTicket.h"
#include "parkingMeter.h"
#include "parkedCar.h"
#include <iostream>
#include <string>
using namespace std;

class policeOfficer
{
private:
	string officerName;
	double badgeNum; 
	parkedCar PC;
public:
	policeOfficer();
	policeOfficer(string na, double num)
	{
		officerName = na;
		badgeNum = num;
		PC.getColor();
	}

	string getOfficerName() { return officerName; }
	double getBadgeNum() { return badgeNum; }

	bool examineTime(parkingMeter& paMeter, parkedCar& paCar);
	void issueTicket(parkingMeter& paMeter, parkedCar& paCar);
};