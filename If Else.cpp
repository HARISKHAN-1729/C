#include <iostream>
using namespace std;
int main()
{
	int a;
	int mod;
	cout << "Enter Value of a" << endl;
	cin >> a ;
	mod =a%2 ;
	if (mod ==1)
	cout << "The number is odd" << endl;
	else 
	cout << "The number is even" << endl;
	return 0;
}
