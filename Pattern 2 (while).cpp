#include <iostream>
using namespace std;

int main() 
{
	int i=0, j=1, k=1, a=1, b=1, c=1, d=1, rows=6;
		while ( i<=rows )
		{
			while ( j<=rows-i ) 
			{
				cout << "*";
				j++;
			}
			while ( k<=i )
			{
				cout << " ";
				k++;
			}
		cout << " ";
			while ( a<=6-i )
			{
				cout << "//";
				a++;
			}
			while ( b<=i )
			{
				cout << "\\\\";
				b++;
			}
		cout << " ";
			while ( c<=i )
			{
				cout << " ";
				c++;
			}
			while ( d<=rows-i )
			{
				cout << "*";
				d++;
			}
		a=1;
		b=1;
		c=1;
		d=1;
		k=1;
		j=1;	
		i++; 
		cout << endl;
		}
return 0;
}
