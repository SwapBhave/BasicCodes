///****************************************************************************/
////Declaring and Defining a pointer 
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 15;
//	int *p;	 //int Pointer 'p' is declare here
//	p = &i; // now we are storing address of i (&i) into pointer p
//	//int *p=&i // we can combinely declare and define pointer in one statement also which is combination os line 11 and 12 statements
//	cout << " Value of i is: " << i << endl;
//	cout << " Value at address hold by pointer p is:" << *p << " which is nothing but value of i" << endl;
//	cout << " Address of i is: " << &i << endl;
//	return 0;
//}

/**************************************************************************/
////Assigning value to variable using pointer
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	int *p;   //Declaring pointer
//	p = &i;  //Storing address of i into pointer now p is pointing to i
//	cout << " Value of i is: " << i << " address of i is: " << &p << endl;
//	cout << " Now changing Value of i using pointer as :"
//		<< " *p=18 " << endl;
//	*p = 18;
//	cout << " Now value of i is: " << i << " and Address of i is : " << &p << endl;
//	return 0;
//}
////In output of this program note that address is same but value is changed

/**************************************************************************/
////NULL Pointer
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	int *p = NULL;   //Declaring a NULL pointer
//	cout << " Value at pointer p is : " << *p << " Address of pointer p is : " << &p << endl;
//	return 0;
//}
////Program dosenot print anything

/**************************************************************************/
//Case checking using pointer
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	int *p = NULL;
//	if (p)  // p is null pointer so condition is FALSE and we will directed to ELSE loop
//	{
//		cout << " This case will not be executes " << endl;
//	}
//	else
//	{
//		cout << " We directly come into ELSE case as pointer is NULL hence if(p) got FALSE result";
//	}
//	return 0;
//}

//Now lets put some value in pointer p and check same program with IF case
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	int *p;
//	p = &i;  // Storing address of i into p
//	if (p)  // Now 'p' is holding 'i' value so condition becomes TRUE and we will directly go in IF case
//	{
//		cout << " we are here because 'if(p)' is true due to p is now holding valid value " << endl;  // this statement will get executed
//	}
//	else
//	{
//		cout << "this case will not be executed" << endl;
//	}
//	return 0;
//}

/************************************************************************************/
//Comparing two pointer with ==  and != operator
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 10;   
//	int j = 20;   //declare two int i and j so address of i and j are different
//
//	int *p;
//	int *q;  // two pointers p and q 
//	
//	p = &i;  // p is holding address of i
//	q = &j;  // q is holding address of j
//	
//	// Both pointers are holding different addresses
//	cout << " Address hold by pointer p is : " << p<< " Value hold by pointer p is (value of i) : " << *p << endl;
//	cout << " Address hold by pointer q is : " << q<< " Value hold by pointer q is (value of j) : " << *q << endl;
//	cout << " Note:address is different\n" << endl;
//	
//	//Now compare pointer
//	if (p == q)
//	{
//		cout << " Pointers having Same address" << endl; // this will not get executed
//	}
//	else
//	{
//		cout << " Pointers Having Different address\n " << endl; // this wil get executed
//	}
//	return 0;
//	//Note:Comparison is based on address not on value
//}

/*********************************************************************************************/
// Now check above example when address is same

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 10; // Declared only one variable
//
//	int *p;
//	int *q;  // two pointers p and q 
//
//	p = &i;  // p is holding address of i
//	q = &i;  // q is holding address of i 
//
//	// Both pointers are holding same addresses that is address of i
//	cout << " Address hold by pointer p is : " << p << " Value hold by pointer p is (value of i) : " << *p << " \n " << endl;
//	cout << " Address hold by pointer q is : " << q << " Value hold by pointer q is (value of j) : " << *q << " \n " << endl;
//	cout << " Note:address is same\n" << endl;
//
//	//Now compare pointer
//	if (p == q)
//	{
//		cout << " Pointers having Same address" << endl; // this will not get executed
//	}
//	else
//	{
//		cout << " Pointers Having Different address\n " << endl; // this wil get executed
//	}
//	return 0;
//}
// it proves that comparison is taking place on the base of address

/**************************************************************************************************************/
//// need of void pointer
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 10; // i is int holding value 10
//	double *p; // p is double pointer  
//	p = &i; // we are trying to save address of i into p 
//	cout << "Address of i (Hold by pointer p ) is : " <<p<<" Value of i using pointer p is: "<<*p<< endl;
//	return 0;
//}
//// This program will generate error C2240 that indicated that int * cannot hold value of double *

/******************************************************************************************************/
//Above Program solution is VOID pointer

#include<iostream>

using namespace std;

int main()
{
	int i = 10;
	double d = 150;
	float f = 3.14;

	int *p; //Declaring void pointer

	p = &i; //p is now holding int i address (p is now int pointer)
	cout << "Address hold by p is: "<< p <<endl;
	cout << "Value at address pointed by p is "<< *p <<endl;
/*
	p = &d; //p is now holding int i address (p is now double pointer)
	cout << "Address hold by p is: " << p << endl;;

	p = &f; //p is now holding int i address (p is now float pointer)
	cout << "Address hold by p is: " << p << endl;
*/
	return 0;
}











































































