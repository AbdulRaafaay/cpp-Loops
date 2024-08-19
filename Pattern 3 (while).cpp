#include <iostream>
using namespace std;

int main() 
{
	int i=0, j=1, a=1, b=1, r=0, c=1, rows1=8, c1=1, c2=1, rows2=9;
		while ( i<=rows1 )
		{
			while ( j<=rows1-i )
			{
				cout << " ";
				j++;
			}
		j=1;
			while ( j<=i )
			{
				cout << j;
				j++;
			}
		i++;
		j=1;
		cout << i;
			
			while ( b<=r )
			{
				cout << c;
				b++;
				c--;
			}
		
		b=1;
		c=a;
		a++;
		r++;
		j=1;
		cout << endl;		
		}
		while ( c1<=rows2 )
		{
			while ( c2<=c1 )
			{
				cout << " ";
				c2++;
			}
		c2=1;
			while ( c2<=rows2-c1 )
			{
				cout << c2;
				c2++;
			}
		cout << endl;
		c2=1;	 
		c1++;	
		}
return 0;
}
