#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i , j , tempi;
	int n=6;
	float temp;
	cout <<" enter the numbers:"<<endl;
	cin>> data ;
	float aa[6];
	for (j=0 ; j<n ; j++)
{
   temp =0;
   for (i=0 ; i<n ; i++)
	{
		if (temp<data[i])
		{
			temp=data[i];
			tempi = i;
		}
	}
	data [tempi]=0;
	aa[j] = temp;
}
   
cout <<"data in desending  order \n "  ;
for  (j=0 ; j<n ; j++)
   cout <<aa[j]<< endl;
   cout<<"\ndata in ascending order\n"   ;
   for( j=n-1 ; j>=0 ; j-- )
   cout << aa[j]<< endl;
   getch ();
   }
