#include <iostream>
using namespace std;

int main() 
{
	int i=1, j=1, rows=1, rows1=5;
	while ( i<=rows )
	{
		while ( j<=11)
		{
			cout << "!!";
			j++;
		}
	j=1;
	cout << endl;
	i++;
	}
	j=1;
	i=1;
	while ( i<=rows1 )
	{
		while ( j<=i )
		{
			cout << "\\\\";
			j++;
		}
	j=1;
		while ( j<=rows1-i )
		{
			cout << "!!";
			j++;
		}
	j=0;
		while ( j<=rows1-i )
		{
			cout << "!!";
			j++;
		}
	j=1;
		while ( j<=i ) 
		{
			cout << "//";
			j++;
		}
	cout << endl;
	j=1;
	i++;
	}
return 0;
}
