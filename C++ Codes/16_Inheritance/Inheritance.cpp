#include<iostream>

using namespace std;

class Bus
{
private:
	int NoWheels = 6;

public:
	void BusWheelCount(void)
	{
		cout << "bus is " << NoWheels << " Wheeler" << endl;
	}
};

class Bike
{
private:
	int NoWheels = 2;

public:
	void BikeWheelCount(void)
	{
		cout << "bike is " << NoWheels << " Wheeler" << endl;
	}
};

class Vehicle :public Bus,public Bike
{
	
};

int main()
{
	Vehicle vh;
	vh.BikeWheelCount();
	vh.BusWheelCount();
	return 0;
}