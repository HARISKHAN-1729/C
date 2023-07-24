#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a , b , x ;
	cout << "Enter  a :" ;
	cin >> a ;
	cout << "Enter b :" ;
	cin >> b ;
	x = pow (a , b) ;
	cout << "The power of a is :" << x << endl;
	x = sqrt (a);
	cout << "The sqrt of a is :" << x << endl;
	x= cbrt (a);
	cout << "The cube root of a is :" << x << endl;
	return 0;	
}
