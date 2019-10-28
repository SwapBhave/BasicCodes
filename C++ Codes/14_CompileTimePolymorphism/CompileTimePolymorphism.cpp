
/*Compile time polymorphism*/

#include<iostream>

using namespace std;

class Addition
{
public:
	int Sum(int, int);
	int Sum(int, int, int);
};

int Addition::Sum(int a,int b,int c)
{
	return a + b + c;
}

int Addition::Sum(int a, int b)
{
	return a + b;
}

int main()
{	
	Addition add;
	//int sum1,sum2;
	cout << "Addtion using Sum(int,int) is: " <<add.Sum(10,20)<< endl;
	cout << "Addition using Sum(int,int,int) is: "<<add.Sum(10,20,30)<<endl;

	return 0;
}

