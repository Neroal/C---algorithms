#include <iostream>
#include <cstdlib>

using namespace std;

void Bubble_Sort(int *array,int size);
void printArray(int *array,int size);

int main(void)
{
	int array[] = {35,77,6,2,18,23,58,70,61,4};
	Bubble_Sort(array,sizeof(array)/sizeof(array[0]));
	printArray(array,sizeof(array)/sizeof(array[0]));
	system("pause");
} 

void Bubble_Sort(int *array,int size)
{
	for(int i=0;i<size-1;++i)
	{
		for(int j=i+1;j<size;++j)
		{
			
			if(array[j] < array[i])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void printArray(int *array,int size)
{
	for(int i=0;i<size;i++)
		cout << array[i] << " ";
}
