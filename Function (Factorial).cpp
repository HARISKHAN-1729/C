#include <iostream>
#include <conio.h>
using namespace std;
int fac(int a);
int main()
{
	int a,i;
	double fact=1;
	cout << "Enter Any Number: " ;
	cin >> a;
	fac (a);
	
}
    int fac (int a)  //We can use void also
{
	double fact=1;
	int i;
	for (i=a; i>0; i--)
{
	fact=fact*i;
}
    cout << "Factorial is: " << fact ;
    getch();
}
