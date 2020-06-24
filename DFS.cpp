#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
class Node{
	public:		
		int val;
		Node* left;
		Node* right;
		Node(int v){val = v;left=NULL;right=NULL;}
};

Node* AddTree(int value)
{
	Node* root = new Node(value);
	
	root -> left = new Node(1);
	root -> right = new Node(2);
	
	Node* temp1 = root -> left;
	temp1 -> left = new Node(3);
	temp1 -> right = new Node(4); 
	
	Node* temp2 = root -> right;
	temp2 -> left = new Node(5);
	temp2 -> right = new Node(6);
	
	return root;
}

int main()
{
	Node* root = AddTree(0);
	vector<Node*> list(0);
	list.push_back(root);
	cout << list.size() << endl;
	for(int i=0;i<list.size();i++)
	{
		if(list[i] -> left != NULL) {
			list.insert(list.begin()+(i+1),list[i] -> left);
			//list.push_back(list[i] -> left);
			
		}
		if(list[i] -> right != NULL){
			list.insert(list.begin()+(i+2),list[i] -> right);
			//list.push_back(list[i] -> right);
		
		} 
		
	}
	cout << "DFS: ";
	for(int i=0;i<list.size();i++)cout << list[i] -> val << " " ;
	return 0;
}


