#pragma once
#include "policeOfficer.h"
#include "parkingTicket.h"
#include "parkedCar.h"
#include <iostream>
#include <string>
using namespace std;

class parkingMeter
{
private:
	int timePaid;
public:
	parkingMeter() {}
	parkingMeter(int t) 
	{
		timePaid = t;
	}
	int getPaidTime() { return timePaid; }
};

