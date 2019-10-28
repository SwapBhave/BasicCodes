#include<iostream>

using namespace std;

class Area
{
public:
	int Radious;
	float CirculeArea(int);
};

float Area::CirculeArea(int Radious)
{
	return 2 *3.14*Radious;
}

int main()
{
	Area area;
	shape sh;
	float Output = area.CirculeArea(20);
	cout << "Radious is:" << Output << endl;
}
