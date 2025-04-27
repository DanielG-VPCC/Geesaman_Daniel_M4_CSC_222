#pragma once
#include <string>
#include <iostream>
using namespace std;

class parkedCar
{
private:
	string make;
	string model;
	string color;
	string licenseNum;
	int timeParked;
public:
	parkedCar() {}
	parkedCar(string ma, string mo, string co, string liNum, int t)
	{
		make = ma;
		model = mo;
		color = co;
		licenseNum = liNum;
		timeParked = t;
	}
	~parkedCar()
	{
		//cout << "object destroyed";
	}

	string getMake() { return make; }
	string getModel() { return model; }
	string getColor() { return color; }
	string getNum() { return licenseNum; }
	int getParkedTime() { return timeParked; }
};