#include <iostream>
using namespace std;

bool primeNumber(int);

int main()
{
	
	int userEntry;
	int i;
	
	cout<<"Please enter an integer: \n";
	cin>>userEntry;
	
	if(userEntry<=1)
	{
		cout<<"Not a prime number.\n";
	}
	
	
	
	for(i = 2;i <= userEntry;i++)
	{
		if(primeNumber(i))
		{
			cout<<i;
			cout<<"\n";
			
		}
		else
		{
		}
	}
}

bool primeNumber(int x)
{
	int i;
	for(i = 2;i < x; i++)
	{
		if(x%i==0)
		{
		return false;
		}
	}
	
	return true;
	
}
