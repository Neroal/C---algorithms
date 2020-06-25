#include <iostream>
#include <cstdlib>

using namespace std;

void Insertion_Sort(int *array,int size);
void printArray(int *array,int size);

int main(void)
{
	int array[] = {35,77,6,2,18,23,58,70,61,4};
	Insertion_Sort(array,sizeof(array)/sizeof(array[0]));
	printArray(array,sizeof(array)/sizeof(array[0]));
	system("pause");
} 

void Insertion_Sort(int *array,int size)
{
	for(int i=1;i<size;++i)
	{
		int current = array[i];
		for(int j=i-1;j>=0;--j)
		{
			if(array[j] >= current)
			{
				array[j+1] = array[j];
				array[j] = current;
			}
			else if(array[j] < current)
			{
				array[j+1] = current;
				break;
			}
		}
	}
}

void printArray(int *array,int size)
{
	for(int i=0;i<size;i++)
		cout << array[i] << " ";
}
