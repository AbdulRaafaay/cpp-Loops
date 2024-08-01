#include <iostream>
using namespace std;

int main() 
{
	int i, j, rows=6;
		for ( i=1; i<=rows; i++ )
		{
			cout << "#" ;
				for ( j=1; j<=i-1; j++ )
				{
					cout << " ";
				}
			cout << "#" << endl;
		}

return 0;
}
