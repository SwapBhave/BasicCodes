#include<iostream>

using namespace std;


class Base
{
private:
	int Count;
	void IncrementCount();
public:
	void SetCount(int);
	void GetCount();
	void AccessFunc(void);
};


class Derived :public Base
{

};

void Base::SetCount(int Num)
{
	Count = Num;
}

void Base::GetCount()
{
	cout << " Value of Count is: " << Count << endl;
}

void Base::AccessFunc()
{
	IncrementCount();
}

void Base::IncrementCount()
{
	Count++;
}


int main()
{	
	Derived Der;
	Der.SetCount(10);
	Der.GetCount();
	Der.AccessFunc();
	Der.AccessFunc();
	Der.GetCount();
	return 0;
}