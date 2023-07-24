#include <iostream>
using namespace std;
int main()

{
	char o;
	float a, b;
	cout << " Enter The Operator (+,-,*,/): " ;
	cin >>o;
	cout << " Enter two Operands: ";
	cin >> a >> b;
	
	switch (0)
	{
	case '+' :
		cout << a << "+" << b << "=" << a+b ;
		break;
	case '-' :
	    cout << a << "-" << b << "=" << a-b ;
	    break;
	case '*' :
	    cout << a << "*" << b << "=" << a*b ;
	    break;
	case '/' :
	    cout << a << "/" << b << "=" << a/b ;
	    break;
	}
	{
		double x, result ;
	cout << "Enter the value(in Radians): " ;
	cin >> x ;
      switch(0)
   {
	    case'sin(x)':
	cout << "sin(x) = " << endl ; 
	break;
    case 'cos(x)':
	cout << "cos(x) = " <<endl ;
	break;
	case 'tan(x)':
	cout << "tan(x) = " << endl ; 
	break;
	case 'asin(x)':
	cout << "asin(x) = " << endl ;
	break;
	case 'acos(x)':
	cout << "acos(x) = " <<endl ;
	break;
	case 'atan(x)':
	cout << "atan(x) = " <<endl ;
	break;
	case 'sinh(x)':
	cout << "sinh(x) = " <<endl ;
	break;
	case 'cosh(x)':
	cout << "cosh(x) = " <<endl ;
	break;
	case 'tanh(x)'
	cout << "tanh(x) = " << endl ;
	break;	}
	}
 }
