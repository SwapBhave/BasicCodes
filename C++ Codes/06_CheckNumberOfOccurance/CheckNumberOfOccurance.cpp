#include<iostream>

using namespace std;


int main()
{
	int num=0,cnt=1,pnum=0;
	while (cin >> num)
	{
		if (pnum == num)
		{
			cnt++;
		}
		else
		{
			cout << " Number " << pnum << " Occure " << cnt << " Times \n" << endl;
			pnum = num;
			cnt = 1;
		}
	}

	return 0;
}