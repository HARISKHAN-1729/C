#include <iostream>33




3.3
#include <conio.h>
using namespace std;
int main ()
{
	int a,b,x;
	cout << "Enter The Value Of 10000 Digits " ;
	cin >> x;
	cout << "The Reversed Figure is = " ;
	for (int i=0; i<10000; i++)
	{
      a=x/10;
      b=x%10;
      cout << b ;
      x=a;
    }
    getch ();
    return 0;
	
}
