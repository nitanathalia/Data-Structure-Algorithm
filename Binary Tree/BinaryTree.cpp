#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insert(int  insertId){
	root = insertRecrusive(root, insertId);	// Root become the currentRoot, inserId become insertId
}

Node *BinaryTree::insertRecursive(Node *currentRoot, int insertId){
	if(currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
	}
	if(insertId < currentRoot->id){							// bring the data
		currentRoot->left = insertRecrusive(currentRoot->left, insertId);
	}
	
	else if(insertId > currentRoot->id){
		currentRoot->right = insertRecrusive(currentRoot->right, insertId);
	}
	
	return currentRoot;
}

void BinaryTree::inOrder(){
	inOrderRecrusive(root);
}

void BinaryTree::insertRecursive(Node *currentRoot){
	if(currentRoot!=NULL){
		inOrderRecrusive(currentRoot->left);
	//	if(currentRoot->left==NULL && currentRoot->right==NULL)	// This is only print the right value
		cout << currentRoot->id << ", ";		
		inOrderRecrusive(currentRoot->right);
	}
	
}
