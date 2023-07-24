#include <iostream>
#include <conio.h>
using namespace std ;
int main()
{
	char name [10];
	int age;
	cout << "Enter Your Name:";
	cin >> name;
	cout << "Enter Your Marks %age:" ;
	cin >>age;
	if (age <=30)
	cout << "You are Tabah Mr. " << name << endl;
	else if (age<40)
	cout << name << "You have Grade D Mr. " << name << endl ;
	else if (age<50)
	cout << "Your have Grade C Mr." << name <<endl;
	else if (age<60)
	cout << "You have Grade B Mr." << name << endl;
	else if (age<70)
	cout << "You have Grade A Mr." << name << endl;
	else 
	cout << "You are super Einstein Mr."	<< name << endl;
	getch ();
	return 0;
}
