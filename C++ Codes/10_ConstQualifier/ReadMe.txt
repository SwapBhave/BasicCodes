-Const qualifier is used when we know that thab value of particular variable will not change and it remain same through program
-Any attempt to change value of const is cause Error
-we cannot use '--' or '++' / Increment or Decrement operator on constant
-Reference to constant : Only constant reference can refer constant variable. we cannot use normal reference to refer constant variable, lets take example:
	ex: const int i=10;
	    const int &ref_r1=i; // both reference and object are constant
	    r1=42; // r1 is reference to constant so it cause error
	    int &r2=i; // error as non constant reference to constant object
-as in above example 3rd line indicated that , reference to constant cannot be use to change value of object
-To point constant object needs a constant pointer