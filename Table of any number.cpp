#include <iostream>
using namespace std;
int main()
{
	int c,n;
	cout << "Give me table of any number =" ;
	cin >> n;
	for ( c=0; c<=1000; ++c )
	{
		cout << n ;
		cout << "*" ;
		cout << c ;
		cout << "=" << n*c ;
		cout << endl << endl ;
	}
}
