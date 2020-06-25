#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Fibonacci{
	public:
		long long Mathematics(int n)
		{
			float a = 1/sqrt(5);
			float b = 1+sqrt(5)/2;
			float c = 1-sqrt(5)/2;
			
			return a*(pow(b,n))-a*(pow(c,n));
		}
		
};

int main(void)
{
	Fibonacci test;
	cout << test.Mathematics(2);
	system("pause");
}
