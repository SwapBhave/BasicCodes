#include<iostream>

using namespace std;

class Base
{
protected:
	int a = 10;

public:
	int b = 20;
	int AdditionBased(int);
};

class Derived :public Base
{
public:
	int AdditionDerived(int);
};

int Base::AdditionBased(int num1)
{
	return  num1 + a;
}

int Derived::AdditionDerived(int num1)
{
	return num1 + b;
}

int main()
{
	int num1 = 1;
	Base base;
	Derived derived;
	cout << "Result using AdditionBase: " <<derived.AdditionDerived(num1)<< endl;
	cout << "Result using AdditionDerived : " << base.AdditionBased(num1) << endl;
	cout << "Result using AdditionBase using Derived object: " << derived.AdditionBased(num1) << endl;
}