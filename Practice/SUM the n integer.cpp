// sum of 1+2+3+...+n
#include <iostream>
#include <cstdlib>

using namespace std;

int sum(int n)
{
	if(n < 1) return 0;
	else return n+sum(n-1);
}

int main(void)
{
	cout << sum(5);
	system("pause");
}
