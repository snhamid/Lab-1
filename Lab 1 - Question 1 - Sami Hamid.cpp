#include <iostream>
using namespace std;

void displayMenu();

int main()
{
	char userEntry;
	
	do{
		
		displayMenu();
		
		cin>>userEntry;
		
		switch(userEntry)
		{
			case 'D':
				cout<<"Delete a substring.\n\n";
				break;
			
			case 'F':
				cout<<"Find a string.\n\n";
				break;
			
			case 'I':
				cout<<"Insert a string.\n\n";
				break;
				
			case 'R':
				cout<<"Replace a string.\n\n";
				break;
				
			case 'Q':
				cout<<"Quit.\n\n";
				break;
				
			default:
				break;
			
		}
		
		
		
	}while(userEntry!='Q');
}


void displayMenu()
{
	cout<<"List of edit operations:\n";
	cout<<"D - Delete a substring.\n";
	cout<<"F - Find a string.\n";
	cout<<"I-Insert a string.\n";
	cout<<"R - Replace a substring.\n";
	cout<<"Q - Quit.\n";
	cout<<"Enter D, F, I, R, or Q as your selection:\n";
}
