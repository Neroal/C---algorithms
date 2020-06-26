#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Fibonacci{
	
	public:
		int *cache;
		long Mathematics(int n)
		{
			float a = 1/sqrt(5);
			float b = 1+sqrt(5)/2;
			float c = 1-sqrt(5)/2;
			
			return a*(pow(b,n))-a*(pow(c,n));
		}
		
		void initial_cache(int n){
			cache = new int[n+1];
			for(int i=0;i<=n;i++)cache[i]=-1;
			cache[0]=0;
			cache[1]=1;
		}
			
		int Dynamic_Programming(int n)
		{		
			if(cache[n]== -1)
			{
				cache[n] = Dynamic_Programming(n-1)+Dynamic_Programming(n-2);
			}
			return cache[n];
		}
		
		void print_cache(int n)
		{
			for(int i=0;i<n;++i)cout << cache[i] << " ";
		}
		
		
};

int main(void)
{
	Fibonacci test;
	//cout << test.Mathematics(2);
	test.initial_cache(10);
	test.Dynamic_Programming(10);
	test.print_cache(10);
	system("pause");
}
