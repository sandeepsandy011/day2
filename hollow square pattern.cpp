#include<iostream>
using namespace std;

int main()
{
	int i, j, side,sym;  

    cout << "Enter Side of a Hollow Square = ";
    cin >> side;

    
    cout<<"\nenter the symbol to show : ";
    cin>>sym;
    
		

    for(i = 0; i < side; i++) 
    {
    	for(j = 0; j < side; j++)
        {
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1) 
            {
                cout << "*" << " ";
            }
            else 
            {
                cout << "  ";
            } 
        }
        cout << "\n";
    }		
 	return 0;
 }
