#include <iostream>
using namespace std;
 
int main()
{
    int mat[3][3], i, j;
    double determinant = 0;
    
    cout<<"Enter elements of matrix row wise:";
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
           cin>>mat[i][j];
    
    cout<<"Given matrix is:";
    for(i = 0; i < 3; i++){
        cout<< endl;
        
        for(j = 0; j < 3; j++)
            cout<<mat[i][j]<<"         ";
    }
    for(i = 0; i < 3; i++)
        determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
    
    cout<<endl<<"determinant: "<<determinant;
 
   return 0;
}
