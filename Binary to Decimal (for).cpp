#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int num1, sum=0, n, num2;
	cout << "\nEnter a number in Binary form : ";
	cin >> num1;
	for ( num1, n=0; num1>0; n++ )
	{
		 num2=num1%10;
		 num2 = num2 * ( pow ( 2,n ) ) ;
		 sum = sum + num2;
		 num1 = num1/10; 
	}
	cout << "\n::  RESULT  ::";
	cout << "\n\nThe Decimal form is : " << sum;
	
return 0;
}
