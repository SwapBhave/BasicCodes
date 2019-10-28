/************************************************************************************/
// Pointers to Pointers

#include<iostream>

using namespace std;

int main()
{
	int i = 25;
	int *p = &i;
	int **q = &p;
	cout<<" Value of i is : "<<i<<endl;
	cout<<" Address of i is: " << &i << endl;
	cout<<" Value hold by p (Address of i) :"<<p<<endl;
	cout<<" Value hold by **q is (Address of p) : "<<q<<endl;
	return 0;
}