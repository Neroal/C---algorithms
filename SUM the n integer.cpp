// sum of 1+2+3+...+n
#include <iostream>
#include <cstdlib>

using namespace std;

int sum(int n)
{
	if(n < 1) return 0;
	else return n+sum(n-1);
}

int math_sum(int n)
{
	return n*(n+1)/2;
}

int main(void)
{
	cout << sum(5) << endl;
	cout << math_sum(5) << endl;
	system("pause");
}
