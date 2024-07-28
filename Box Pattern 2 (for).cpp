#include <iostream>
using namespace std;

int main() 
{
	int i, j, rows=5;
	for ( i=1; i<=rows; i++ )
	{
		cout << " __ ";
		for ( j=1; j<=i-1; j++ )
		{
			cout << "   ";
		}
		cout << " __"; 
		cout << endl;
		for ( j=0; j<=i; j++ )
		{
			cout << "|__|";
			for ( j=1; j<=i-1; j++ )
			{
				cout << "   ";
			}
			cout << "|__|";
			cout << endl;
		}
	}



 
return 0;
}
