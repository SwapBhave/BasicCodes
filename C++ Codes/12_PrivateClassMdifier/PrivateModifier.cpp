#include<iostream>

using namespace std;

class Addition1
{
private:
	int a=10;

public:
	int Result(int);
};  

int Addition1::Result(int num1)
{
	return a + num1;
}

int main()
{
	Addition1 add1;
	cout << "Result is:"<<add1.Result(10)<<endl;
	return 0;
}