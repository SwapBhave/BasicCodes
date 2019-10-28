Pointer:
-Pointer is a compound type that points to another Type.
-One pointer can point only at one variable at a time
- Syntax of declaration
	int *p; //p is an int pointer
	double *d // d is pointer to double
-Pointer holds an address of another object. We get address of an object by using '&' Operator
	eg. int p=10;
	    int *q=&p ///int pointer q is hoilding address of p
-Type of pointer and address of object to which is points must be same.
-NULL pointer is a pointer which hold null value before attempting to use it
	eg int *p=NULL;
	   or int *p=0;
-It is illegal to directly assigning integer variable to Pointer as:
	eg : int i=0;
	     int p= i; //It is not allowed
-If pointer is NULL pointer then if(<Pointer name>) is False ,  if pointer is non zero the 'if' condition will be TRUE
-We can compare two pointer by using (==) or (!=) operator. if both pointer holds same address then they are equal or if both pointers are pointing different locations then they are not equal.
-if we take two NULL pointers and compare them then result is always equal
-Till now we know type of value which address we want to hold , Now lets consider we have to hold
value of some unknown type means we dont know weather we have to create int , double pointer
so solution is VOID pointer which is generic pointer that can hold any type of value
