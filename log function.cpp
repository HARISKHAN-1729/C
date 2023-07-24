#include <iostream>
#include <math.h>
using namespace std ;
int main()
{
	long double x , result ;
	cout << "Enter the value :" ;
	cin >> x ;
	result = log10(x) ;
	cout << "log10(x) = " << result << endl ;
	return 0;
}
