#include <iostream>
using namespace std;

int main() 
{
	int cur, a, b, c;
	bool choice=0;
	cout << "Enter the PKR : ";
	cin >> cur;
	c=0;
	do
	{
		b=0;
		do
		{
			a=0;
			do
			{
				if ( (6*a) + (9*b) + (20*c) == cur )
				{
					choice=1;
					break;
				}
			a++;
			}
			while ( a<=cur/6 );
		if ( choice==1 )
			break;
			b++;
		}
		while ( b<=cur/9 );
	if ( choice==1 )
		break;
		c++;
	}
	while ( c<=cur/20 );
	if ( choice==1 )
	{
		cout << "\n\nIt is Possible!" << endl;
		cout << "\n   Notes :  Quantity";
		cout << "\n    6           " << a;
		cout << "\n    9           " << b;
		cout << "\n   20           " << c;
	}
	else
	{
		cout << "\n\n:::   NOT POSSIBLE   :::";
	}
	
return 0;
}
