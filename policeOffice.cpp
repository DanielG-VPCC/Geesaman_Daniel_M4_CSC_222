#include "policeOffice.h"

parkingMeter::parkingMeter(int t)
{
	paidTime = t;
}

int parkingMeter::timePaid()
{
	return paidTime;
}

parkedCar::parkedCar(string ma, string mo, string co, string li, int pa)
{
	make = ma;
	model = mo;
	color = co;
	license = li;
	parkedTime = pa;
}

string parkedCar::carDetails(string make, string model, string color, string license)
{
	return (make, model, color, license);
}

int parkedCar::timeParked()
{
	return parkedTime;
}

void parkingTicket::reportCarTicket()
{
	cout << "*** PARKING TICKET ***" << endl;
	cout << "Officer " << 
}

int parkingTicket::fineDue()
{
	int time;
	int cost = 25;
	time = (parkedCar->timeParked()) - (parkingMeter->timePaid());
	time = time - 60;
	for (int i = 60; time < i; time - 60)
	{
		cost = cost + 10;
	}
	return cost;
}

ticketOfficer::ticketOfficer(string name, int badge)
{
	officerName = name;
	badgeNum = badge;
}

void ticketOfficer::isTimeExpired()
{
	if ((parkedCar->timeParked()) > (parkingMeter->timePaid()))
	{
		makeParkingTicket();
	}
	else
	{
		cout << "no ticket is issued";
	}
}

void ticketOfficer::makeParkingTicket()
{
	parkingTicket->fineDue();
}

parkingTicket::parkingTicket(string o, int b)
{

}

void officerDisplay()
{
	cout << "Officer" << officerName
}