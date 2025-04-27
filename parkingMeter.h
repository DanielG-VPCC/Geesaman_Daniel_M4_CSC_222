#pragma once
#include <iostream>
#include <string>
using namespace std;

class parkingMeter
{
private:
	int timePaid;
public:
	parkingMeter()
	{
		
	}

	parkingMeter(int t)
	{
		timePaid = t;
	}

	~parkingMeter()
	{

	}

	int getPaidTime()
	{
		return timePaid;
	}
};