#include<iostream>

int main()
{
	int v1, v2;
	std::cout << "Enter Two Numbers\n" <<std:: endl;
	std::cin >> v1 >> v2;
	std::cout << "Addition of given two number is:" << v1 + v2 << std::endl;
	return 0;
}


/*As in above program we used "Fully Qualified Name" lets say example std::cout because we are not using name space
as "using namespace std" between main and #include if we use that then our program will look like :

#include<iostream>

using namespace std;

int main()
{
	int v1, v2;
	cout << "Enter Two Numbers\n" <<endl;
	cin >> v1 >> v2;
	cout << "Addition of given two number is:" << v1 + v2 << endl;
	return 0;
}


you can comment one program and run another program. Namespaces reduce our typing efforts. Both program run similar
*/