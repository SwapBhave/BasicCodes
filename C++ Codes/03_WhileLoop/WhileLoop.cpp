#include<iostream>

using namespace std;

int main()
{
	int sum =0,num,temp=1;
	cout << "Enter Number whose Factorial you want:\n" << endl;
	cin >> num;
	while (temp< num)
	{
		sum = sum + temp;
		temp++;
	}
	cout << "Sum of all number till "<<num<<" is "<<sum<< endl;
}