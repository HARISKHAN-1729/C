#include <iostream>
#include <conio.h>
using namespace std;
void calc(double a, double b, double c);
int main()
{
	double a,b,c,d;
	cout << "Enter Three Numbers: ";
	cin >> a >> b >> c;
	calc(a,b,c);
}
void calc(double a, double b, double c)
{
    double d;
	d=a/b*c;
	cout << "Your Answer is:" << d;
	getch();
}
