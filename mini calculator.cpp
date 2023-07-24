#include <iostream>
#include <math.h> //WE can also use cmath
using namespace std;
int main()
{   
    char x;
    double a;
	cout << "Enter the trignometric function (sin(x),cos(x),tan(x)) : " ;
	cin >> x ;
	cout << "Enter the value(in Radians): " ;
	cin >> a ;
	
	
	switch(x)
{
	case 'sin(x)' :
	cout << "sin(x)" ;
	cin >> a ;
	break;	
	case 'cos(x)' :
	cout << "cos(x)" ;
	cin >> a ;
	break;
	case 'tan(x)' :
	cout << "tan(x)" ;
	cin >> a ;
	break;
	
	
}
return 0;
}
