#include <iostream>
using namespace std;
int main()
{
 
 int cval = 0, val =0;
 
 if (cin>>cval) {
 int a = 1; 
 while (cin >> val) { 
 if (val == cval) 
 ++a; 
 else { 
cout << cval << " occurs " << a << " times" << endl;
 cval = val; 
 a = 1; 
 }
 } 
 cout << cval << " occurs " << a << " times" << endl;
 } 
 return 0;
}
