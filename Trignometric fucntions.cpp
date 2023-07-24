#include <iostream>
#include <math.h> //WE can also use cmath
using namespace std;
int main()
{
	double x, result ;
	cout << "Enter the value(in Radians): " ;
	cin >> x ;
	result = sin(x) ;
	cout << "sin(x) = " << result << endl ; //For inverse we use asin(x) //For hyperbolic we use sinh(x)
	result = cos(x) ;
	cout << "cos(x) = " << result << endl ; //For inverse we use acos(x) //For hyperbolic we use cosh(x)
	result = tan(x) ;
	cout << "tan(x) = " << result << endl ; //For inverse we use atan(x) //For hyperbolic we use tangh(x)
	result = asin(x) ;
	cout << "asin(x) = " << result << endl ;
	result = acos(x) ;
	cout << "acos(x) = " << result << endl ;
	result = atan(x) ;
	cout << "atan(x) = " << result << endl ;
	result = sinh(x) ;
	cout << "sinh(x) = " << result << endl ;
	result = cosh(x) ;
	cout << "cosh(x) = " << result << endl ;
	result = tanh(x) ;
	cout << "tanh(x) = " << result << endl ;
	
return 0;
}
