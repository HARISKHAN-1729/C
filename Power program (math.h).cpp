#include <iostream>
#include <math.h> //WE can also use cmath
using namespace std;
int main()
{
	double base , exponent , result ;
	cout << "Enter the base :" ;
	cin >> base ;
	cout << "Enter the exponent :" ;
	cin >> exponent ;
	result = pow (base , exponent) ;
	cout << "The power of result is :" << result << endl;
	result = sqrt (base);
	cout << "The square root of base is :" << result << endl;
	result = cbrt (base);
	cout << "The cuberoot of base is :" << result << endl;
	return 0;
}
