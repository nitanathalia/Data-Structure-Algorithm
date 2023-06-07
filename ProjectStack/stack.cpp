#include <iostream>
#include "stack.h"

using namespace std;

void projectStack::stackPush(int input){
	Node* newNode = new Node();
	newNode->value = input;
	newNode->next = NULL;
	
	newNode->next = head;
	head = newNode;
}

void projectStack::printAll(){
	
	Node* tmp = head;
	cout << "The stack element is: " << endl;
	while(tmp){
		cout << tmp->value << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

void projectStack::stackPop(){
	
	Node* temp = new Node();
	temp->next = head;
	
	Node* ctr = new Node();
	ctr->value = temp->value;
	head = head->next;
	delete(temp);
	temp = NULL;
	
}


