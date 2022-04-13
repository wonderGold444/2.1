#include "2.1.h"
#include<iostream>
using namespace std;

int main()
{
	double a;
	cout << "Enter a number , if it is more than 10 ,it will multiple by 10,if no multiple by 100"<<endl;
	cin >> a;
	if(a>10)
	{
		cout << MultipleX10(a);
	}
	else
	{
		cout << MultipleX100(a);
	}
}