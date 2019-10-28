//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{	
//	string str;
//	cout << "Enter String \n" << endl;
//	cin >> str;
//	cout << str << endl;
//	return 0;
//}
//Dont accpet space it print only single word
/**********************************************************/

//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	cout << "\nEnter string\n" << endl;
//	while (cin >> str)
//	{
//		cout << str << endl;
//	}
//	return 0;
//}
//Accept complete string and after pressing enter print each word on seperate line but observe it accpet spaces also
/***********************************************************/

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{	
//	string str;
//	cout << "\nEnter String (Uses GetLine):\n" << endl;
//	while (getline(cin, str))
//	{
//		cout << str << endl;
//	}
//	return 0;
//}

//String is accepting as it is typed, as in previous program it is a job of 'while' to accept space until program is kill (Accept only single line / Accept till new line)

/*******************************************************************/

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string line;
//	while (getline(cin, line))
//	{
//		if (!line.empty())
//		{
//			cout << "String is present" << endl;
//		}
//		else
//		{
//			cout << "String is not present" << endl;
//		}
//	}
//	return 0;
//}

//emply() checks weather string accepted by getline(cin,line) is empty or present

/********************************************************************/
ss