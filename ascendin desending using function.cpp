#include <iostream>
using namespace std;
int function (int a1 , int a2 , int a3 , int a4 );
int main()
{
	int x,y,z,a1,a2,a3,a4;
	int n=4;
	float a;
	cout <<"enter 4 numbers:"<<endl;
	cin>>a1>>a2>>a3>>a4;
	float data[5]={a1,a2,a3,a4};
	float results[4];
	function(a1,a2,a3,a4);
}
    int function(int a1, int a2 , int a3, int a4)
{
	int y,x,z;
	int n=4;
	float b;
	float data[4]={a1 ,a2 ,a3 ,a4};
	float result[4];
	for(y=0;y<n;y++)
	{
		b=0;
		for(x=0;x<n;x++)
		{
			if(b<data[x]);
			{{b=data[x];
			z=x;
			}
			}
			data[z]=0;
			result[y]=b;
		}
		cout<<"data in descending order  :  "<<endl;
		for(y=0;y<n;y++)
		cout<<result[y]<<endl;
		cout<<"data in ascending order  :  "<<endl;
		for(y=n-1;y>=0;y--)
		cout<<result[y]<<endl;
	}
	
	}    
