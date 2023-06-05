#include <iostream>
#include <string>

using namespace std;


// Make a node
class Node{
	public:
		int 	id;
		string 	name;
		Node 	*left;
		Node 	*right;
		
		// make a default node
		Node(){
			left = right = NULL;
		}
};

// Make 
class BinaryTree{
	
	public:
		Node *root;
		
		void insert(int);
		Node *insertRecursive(Node*, int);
		void deleteNode(int);
		
		void preOrder();
		void inOrder();
		void postOrder();
		void inOrderRecrusive(Node*);
		
		Node *search(int);
		Node *findMin();
		Node *findMax();
		
		BinaryTree(){
			root == NULL;
		}
		
};
