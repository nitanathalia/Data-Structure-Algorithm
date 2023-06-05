#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv){
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	//cout << list1.head->next->next->value << endl; 
	list1.printAll();
	
	LinkedList list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	list2.insertToHead(40);
	list2.insertToHead(70);
	list2.insertToHead(10);
	
	cout << "\nList 2 : Insert to Head" << endl;
	list2.printAll();
	
	list2.insertToTail(14);
	cout << "\nList 2 : Insert to Tail" << endl;
	list2.printAll();
	
	list2.insertAfter(11, 40);
	cout << "\nList 2 : Insert After" << endl;
	list2.printAll();
	
	list2.deleteFromHead();
	cout << "\nList 2 : Delete From Head" << endl;
	list2.printAll();
	
	list2.deleteFromTail();
	cout << "\nList 2 : Delete From Tail" << endl;
	list2.printAll();
	
	list2.deleteByValue(2);
	cout << "\nList 2 : Delete By Value" << endl;
	list2.printAll();
	
	return 0;
	
}
