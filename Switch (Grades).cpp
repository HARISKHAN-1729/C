#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << " Enter Your Marks = " ;
	cin >> marks ;
	
	

	switch (marks/10)
	{
		case 4:
		cout << "Your Grade is F"  ;	
		break;
        case 5:
        cout << "Your Grade is C"  ;
        break;
        case 6:
        cout << "Your Grade is B"  ;
        break;
        case 7:
        cout<< "Your Grade is A" ;
        break;
       
    }
    
    return 0;
}
