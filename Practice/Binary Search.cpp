#include <iostream>
#include <cstdlib>
using namespace std;

void Iterative_Search(int target,int list[],int size)
{
	int left=0;
	int right = size-1;
	int middle = size/2;
	
	while(left <= right)
	{
		if(list[middle] == target){
			cout << "Find index:" << middle << endl;
			break;
		}
		else if(list[middle] > target)
		{	
			right = middle-1;		
		}
		else if(list[middle] < target)
		{
			left = middle+1;	
		}
		
		middle = (left + right)/2;
	}
}
 
int Divide_and_Conquer(int target,int list[],int left,int right)
{
	int middle = (left+right)/2;
	if(list[middle] == target) return middle;
	else if(list[middle] < target) return Divide_and_Conquer(target,list,middle+1,right);
	else if(list[middle] > target) return Divide_and_Conquer(target,list,left,middle-1);
	
	return -1; 
}

int main(void)
{
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	Iterative_Search(5,array,sizeof(array)/sizeof(*array));
	int index = Divide_and_Conquer(6,array,0,sizeof(array)/sizeof(*array)-1);
	cout << index << endl;
	system("pause");
}
