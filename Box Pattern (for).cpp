#include <iostream>
using namespace std;

int main() 
{
	int i, j, rows=7;
	for ( i=1; i<=rows; i++ )
	{
		for ( j=1; j<=rows-i; j++ )
		{
			cout << "  ";
		}
		for ( j=1; j<=i; j++ )
		{
			cout << " __ ";
		}
		cout << endl;
		for ( j=1; j<=rows-i; j++ )
		{
			cout << "  ";
		}
		for ( j=1; j<=i; j++ )
		{
			cout << "|__|";
		} 
		cout << endl;
	}



 
return 0;
}
