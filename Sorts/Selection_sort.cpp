#include <iostream>
#include <cstdlib>

using namespace std;

void Selection_Sort(int *array,int size);
void printArray(int *array,int size);

int main(void)
{
	int array[] = {35,77,6,2,18,23,58,70,61,4};
	Selection_Sort(array,sizeof(array)/sizeof(array[0]));
	printArray(array,sizeof(array)/sizeof(array[0]));
	system("pause");
} 

void Selection_Sort(int *array,int size)
{
	for(int i=0;i<size;++i)
	{
		int min = i;
		int temp=0;
		for(int j=i;j<size;++j)
		{
			if(array[j]<=array[min]) min= j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}

void printArray(int *array,int size)
{
	for(int i=0;i<size;i++)
		cout << array[i] << " ";
}
