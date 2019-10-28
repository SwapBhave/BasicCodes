/**********************************************************************************************/
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int a = 45;
//	cout << "\n Value of a is = " << a << endl;
//	return 0;
//}
////this program will run without any error

/**********************************************************************************************/

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int a;
//	return 0;
//}

// this program will cause error as it is not allowed to only declare variable it must be initialized - 'a': 'const' object must be initialized if not 'extern'

/**********************************************************************************************/
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int i = 10;
//	count << "Value of i before incerement is :" << i << endl;
//	i++;
//	count << "value of i after incement is:" << i << endl;
//	return 0;
//}

// this program also cause error as we cant incemenet constant value

/**********************************************************************************************/
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int i = 23;
//	const int &Ref_i = i; //Works fine
//	cout << "\n Value of i is:\n" << Ref_i << endl;
//	return 0;
//}

/**********************************************************************************************/

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int i = 12;
//	int &Ref_i = i;// Will cause error we cannot assign int reference to constant object
//	return 0;
//}

/**********************************************************************************************/

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 42;
//	const int &Ref_r1 = i; // We can assign int object to constant reference
//	int &Ref_r2= i; // Giving reference to i
//	//Ref_r1 = 0; // Not possible  as ref_i_a is constant 
//	Ref_r2 = 0;
//	return 0;
//}

/**********************************************************************************************/

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const double a = 25;
//	//double *ptr = &a; //error C2440: 'initializing': cannot convert from 'const double *' to 'double *'  . Because to point const object need const pointer
//	const double *const_ptr = &a; // will not generate error
//	cout << "\n Value of double a :" << *const_ptr << endl;
//	return 0;
//}
/**********************************************************************************************/

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const double a = 4;
//	const double *Ref_R1 =&a; // Allowed as pointer is also constant
//	//&Ref_R1 = 45; // Now allowed as &Ref_R1 is constant pointer
//	return 0;
//}
/**********************************************************************************************/
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	const int *ptr = &a;
//	cout << "\nValue of a using pointer is:" << *ptr << endl;
//	a = 20;
//	cout << "\nValue of a using pointer is:" << *ptr << endl;// We can change value of 'a' directly  but we cant change value using pointer
//	//*ptr =&b; // gives an error
//	return 0;
//}
/**********************************************************************************************/



/**********************************************************************************************/

/**********************************************************************************************/

/**********************************************************************************************/

/**********************************************************************************************/