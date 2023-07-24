#include <iostream>
using namespace std;
void prime(int p);
int main()
{
	int p;
	cout << "Enter number to find prime = " ;
	cin >> p;
	cout << "Prime numbers upto" << p ;
	prime (p);
}
void prime (int p)
{
	int a,b, count ;
	for (a=1 ; a<=p ; a++)
	{
	for (b=2 ; b<=a; b++)
	if (a%b==0) count==1;
	if (count ==2) cout << "2 3 5 7 " << a;
	count ==1 ;
	
    

	
}
}
