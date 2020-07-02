#include <iostream>
#include <cstdlib>

using namespace std;

int sh(int a)
{
	int r =1;
	switch(a)
	{
		case 1 : r+=1;
		case 5 : r+=20;
		case 8 : r+=30;
	}	
	return r; 
}

int main(void)
{
	cout << sh(5) << endl;
}

