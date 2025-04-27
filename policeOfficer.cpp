#include "policeOfficer.h"
#include "parkingTicket.h"
#include "parkingMeter.h"
#include "parkedCar.h"
#include <iostream>
#include <string>
using namespace std;

bool policeOfficer::examineTime(parkingMeter& paMeter, parkedCar& paCar)
	{	
		if (paMeter.getPaidTime() < paCar.getParkedTime())
		{
			issueTicket(paMeter, paCar);
			return true;
		}
		else
		{
			cout << "car passes inspection";
			return false;
		}
	}

void policeOfficer::issueTicket(parkingMeter& paMeter, parkedCar& paCar)
{
	parkingTicket* ticket = new parkingTicket(paMeter, paCar, officerName, badgeNum);
	ticket->printTicket();
	delete ticket;
}

policeOfficer::policeOfficer()
{

}