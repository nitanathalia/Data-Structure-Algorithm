#include <iostream>
using namespace std;

#define max 5
int data[max];
int top = 0;

bool isFull(){
	if(top >= max){
		return true;
	} else{
		return false;	
	}
}

bool isEmpty(){
	if(top == 0){
		return true;
	} else {
		return false;
	}
}

void push(){
	if(!isFull()){
		cout << "Enter data: ";
		cin >> data[top];
		top++;	//lanjut ke indek selanjutnya
		cout << endl;
	}
}

void pop(){
	if(!isEmpty()){
		top--;
	}
}

void display(){
	if(!isEmpty()){
		cout << "Data saved: " << endl;
		for(int a = 0; a < top; a++){
			cout << a+1 << ". " << data[a] << endl;
		}
	} else {
		cout << "Data is empty!" << endl;
	}
	if(isFull()){
		cout << "Stack is Full" << endl;
	}
	cout << endl;
}

int main(){
	int choice;
	int data;
	
	stack:
		system ("cls");
		display();
		cout << "Menu" << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Clear & close program" << endl;
		cout << "Select Menu: ";
		cin >> choice;
	
	switch(choice){
		case 1:
			system("cls");
			push();
			goto stack;
			break;
		case 2:
			system("cls");
			pop();
			goto stack;
			break;
		case 3:
			system("cls");
			break;
		default:
			cout << "Please enter the right menu!" << endl;
	}
	return 0;
}
