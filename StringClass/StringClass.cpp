// StringClass.cpp : Defines the entry point for the console application.
//
//
//#include <iostream>  	
//#include <cstring>  // for 	strcpy
//using namespace std;
//class Strn
//{
//private:
//	char st[8]; // a string
//
//public:
//	Strn()
//	{
//		st[0] = '\0';
//	}
//
//	Strn(const char s[])
//	{
//		strcpy(st, s);
//	}
//
//};
//int main()
//{
//	Strn s1;
//	Strn s2("House"); // or Strn s2 = "House"; 
//	s1 = s2;
//
//	
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <cstring>  	
using namespace std;

class Strn
{
private:
	char st[10];

public:
	Strn()
	{
		st[0] = '\0';
	}

	Strn(char s[])
	{
		strcpy(st, s);
	}

	void concat(Strn S)
	{
		strcat(st, S.st);
	}
};

int main()
{
	Strn s1("House");
	Strn s2("Boat");

	s1.concat(s2);

	return 0;
}

