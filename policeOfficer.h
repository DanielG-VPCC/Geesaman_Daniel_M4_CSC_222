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
public:
	policeOfficer(string na, double num)
	{
		officerName = na;
		badgeNum = num;
	}
	string getOfficerName() { return officerName; }
	double getBadgeNum() { return badgeNum; }

	bool examineTime()
	{
		parkingMeter meterT;
		parkedCar carT;
		if (meterT.getPaidTime() < carT.getParkedTime())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void issueTicket()
	{
		if (examineTime() == true)
		{
			parkingTicket &printTicket();
		}
		else
		{
			cout << "car passes inspection";
		}
	}
};

