#include <iostream>
#include <cstdlib>
using namespace std;

int Partition(int* array,int front,int end);
void quick_sort(int* array,int front,int end);
void swap(int *a,int *b);
void printarray(int* array,int size);

int main(void)
{
	int array[] = {8,4,7,6,1,5,9};
	int SIZE=sizeof(array)/sizeof(*array);
	cout << "Before QuickSort:";
	printarray(array,SIZE);
	quick_sort(array,0,SIZE-1);
	cout << "After QuickSort:";
	printarray(array,SIZE);
	system("pause");
} 

int Partition(int* array,int front,int end)
{
	int pivot = array[end];
	int i = front -1;
	
	for(int j=front;j< end;j++)
	{
		if(array[j] < pivot)
		{
			++i;
			swap(&array[j],&array[i]);
		}
		
	}
	++i;
	swap(&array[i],&array[end]);
	return i;
} 

void quick_sort(int* array,int front,int end)
{
	if(front < end)
	{
		int pivot = Partition(array,front,end);
		quick_sort(array,front,pivot-1);
		quick_sort(array,pivot+1,end);
	}
}

void swap(int *a,int *b)
{
	int temp = *a;
	*a=*b;
	*b =temp;
}

void printarray(int* array,int size)
{
	for(int i=0;i<size;++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
