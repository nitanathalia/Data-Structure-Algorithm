#include<iostream>
using namespace std;

#define max 5

int data[max];
int top = 0;

bool isFull(){
	if(top >= max){
		return true;
	} 
	else{
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

void view(){
	if(!isEmpty()){
		cout << "Queue data: " << endl;
		for(int a = top-1; a>= 0; a--){
			cout << a+1 << ". " << data[a] << endl;
		}
	} else {
		cout << "Queue is Empty" << endl;
	}
	
	if(isFull()){
		cout << "Queue is Full." << endl;
	}
	cout << endl;
}

void enqueue(){
	if(!isFull()){
		cout << "Input number: ";
		cin >> data[top];
		top++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int a = 0; a < top-1; a++){
			data[a] = data[a+1];
		}
		top--;
	}
}
int main(){
	int choice, isi;
	
	queue:
		system("cls");
		view();
		cout << "Menu Utama" << endl;
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. Clear and close program" << endl;
		cout << "Pilihan: ";
		cin >> choice;
		
		switch(choice){
			case 1: 
				system("cls");
				cout << "1. Enqueue Operation" << endl;
				enqueue();
				goto queue;
				break;
			case 2:
				system("cls");
				cout << "2. Dequeue Operation" << endl;
				dequeue();
				goto queue;
				break;
			case 3:
				system("cls");
				break;
			default:
				cout << "Please try again!" << endl;	
		}
}
