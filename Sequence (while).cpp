#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int i=1, j=2, n=1, a=1;
	while ( i<=31 )
	{
		while ( n<=5 )
		{
			cout << " " << i << "  ";
			i=i+(pow(2,n));
			n++;
		}
	i++;	
	}
	cout << endl;
	while ( a<=10 )
	{
		if (a<=4 )
			cout << "\b --, ";
		else if ( a==5 ) 
			cout << "---, ";
		else
			cout << "...  ";
		a++;
	}
	cout << endl;
	n=1;
	while ( j<=32 )
	{
		while ( n<=5 )
		{
			cout << " " << j << "  ";
			j= j + ( pow(2,n) );
			n++;
		}
	j++;
	}	

 
return 0;
}
