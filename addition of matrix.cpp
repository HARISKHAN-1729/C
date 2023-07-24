#include <iostream>
using namespace std;
int main()
{
	int r , c , a[100][100] ,b[100][100], sum[100][100], i, j ;
	cout <<"enter number of row (between 1 to 100):";
	cin >> r;
	cout <<"enter number of column(between 1 to 100):";
	cin >> c;
	cout <<endl <<"enter elements of 1st matrix:" <<endl;
	//storing elements of matrix first define by user.
	for(i=0 ; i<r ; ++i)
	 for(j=0 ; j<c ; ++j)
	 {
	 	cout<<"enter element a"<<i+1 << j+1 <<":";
	 	cin>>a[i][j];
	 }
	 cout << endl <<"enter elements of 2nd matrix:"<< endl;
	 for(i=0 ; i<r ; ++i)
	  for(j=0 ; j<c ; ++j)
	  {
	  	cout<<"enter element b"<<i+1<< j+1 <<":";
	  	cin>>b[i][j];
	  }
	  //adding two matrices.
	  for (i=0 ; i <r ; ++i)
	   for (j=0; j<c ; ++j)
	   	sum[i][j]=a[i][j]+b[i][j];
	//displaying the resultant matrix.
	cout<< endl <<"sum of two matrix is:"<<endl;
	for (i=0 ; i<r ; ++i)
	 for( j=0 ; j<c ; ++j)
	 {
	 	cout<< sum[i][j]<<" ";
	 	if(j==c-1)
	 	cout<<endl;
	 }

}
