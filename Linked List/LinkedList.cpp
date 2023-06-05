#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if(tail==NULL){
		tail = head;
	}
}

void LinkedList::insertToTail(int nilai){
	Node* newNode = new Node();
	newNode->value = nilai;
	newNode->next = NULL;
	
	//check if linked list is empty, if linked list is empty
	if(head->next==NULL){
		newNode->next = head;
		head = newNode;
		return;
	}
	
	// find the last node
	Node* ptr = new Node();
	ptr->next = head;
	while(ptr->next!=NULL){
		ptr = ptr->next;
	}
	
	// insert newNode after last node
	ptr->next = newNode;
}

void LinkedList::insertAfter(int input, int pre_input){
	Node* ptr = new Node();
	ptr->next = head;
	
	// check the previous input 
	while(ptr->value!=pre_input){
		ptr = ptr->next;
	}
	
	// insert new input after previous input
	Node* newNode = new Node();
	newNode->value = input;
	newNode->next = ptr->next;
	ptr->next = newNode;
}

void LinkedList::deleteFromHead(){
	
	//Check head is null or not
	if(head==NULL)
		return;
		
	Node* newNode = new Node();
	newNode->next = head;
	head = head->next;
}

void LinkedList::deleteFromTail(){
	
	//makes tmp to cek where is the tail
	Node* ptr = new Node();
	ptr->next = head;
	
	while(ptr->next->next!=NULL){
		ptr = ptr->next;
	}
	ptr->next = NULL;
}

void LinkedList::deleteByValue(int input){
	
	//make new node
	Node* newNode = new Node();
	newNode->value = input;
	newNode->next = head;
	
	// Delete node by value
	// check if  linked lis is empty
	if(head->next==NULL)
		return;
	
	Node* ptr = new Node();
	ptr->next = head->next;
	
	//find previous node
	for(int i=0;ptr!=NULL && i<input-1;i++){
		ptr = ptr->next;	
	}
    
	//if the value is not able
	if(ptr==NULL || ptr->next==NULL)
		return;            
	
	newNode->next = ptr->next->next;
	ptr->next = NULL;
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
}
