#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void Merge_Sort(vector<int> &array,int front,int end);
void Merge(vector<int> &array,int front,int mid,int end);
void printArray(vector<int> array);

const int MAX = 2147483647;
int main()
{
	int arr[]={8,4,5,1,7,9,6,3,2};
	vector<int> array(arr,arr+(sizeof(arr)/sizeof(*arr)));
	cout << "BEFORE:";
	printArray(array);
	Merge_Sort(array,0,array.size()-1);
	cout << "AFTER:";
	printArray(array);
	system("pause");
	return 0;
} 

void Merge(vector<int> &array,int front,int mid,int end)
{
	vector<int> left(array.begin()+front,array.begin()+mid+1);
	vector<int> right(array.begin()+mid+1,array.begin()+end+1);
	
	left.push_back(MAX);
	right.push_back(MAX);
	int indexl=0;
	int indexr=0;
	for(int i=front;i<=end;i++)
	{
		if(left[indexl] <= right[indexr])
		{
			array[i] = left[indexl];
			indexl++;
		}else
		{
			array[i] = right[indexr];
			indexr++;
		}
	}
}

void Merge_Sort(vector<int> &array,int front,int end)
{
	if(front < end)
	{
		int mid = (front+end)/2;
		Merge_Sort(array,front,mid);
		Merge_Sort(array,mid+1,end);
		Merge(array,front,mid,end);
	}
}



void printArray(vector<int> array)
{
	for(int i=0;i<array.size();++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}


