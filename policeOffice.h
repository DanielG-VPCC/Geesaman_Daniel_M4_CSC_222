#pragma once
#include <iostream>
#include <string>
using namespace std;

class parkingMeter
{
private:
	int paidTime;
public:
	parkingMeter(int t);
	int timePaid();
};

class parkedCar
{
private:
	string make;
	string model;
	string color;
	string license;
	int parkedTime;
public:
	parkedCar(string make, string model, string color, string license, int pa);
	int timeParked();
	string carDetails(string make, string model, string color, string license);
};

class parkingTicket
{
private:
	parkedCar* parkedCar;
	parkingMeter* parkingMeter;
	string officer;
	int badge;
public:
	parkingTicket(string o, int b);
	void reportCarTicket();
	int fineDue();
};

class ticketOfficer
{
private:
	string officerName;
	int badgeNum;
	parkingTicket* parkingTicket;
	parkingMeter* parkingMeter;
	parkedCar* parkedCar;
public:
	ticketOfficer(string name, int badge);
	void officerDisplay();
	void isTimeExpired();
	void makeParkingTicket();
};


