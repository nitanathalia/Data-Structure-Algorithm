#include <iostream>
using namespace std;

int main()
{
	cout << "BINARY SEARCH" << endl;
	cout << "=============" << endl << endl;
	
	int data;
	cout << "Enter the amount of data: ";
	cin >> data;
	int value[data];
	for(int i=0; i<data; i++){
		cout << endl;
		cout << "Value to[" << i+1 <<"]: ";
		cin >> value[i];
	}
	for(int i=0; i<data; i++){
		for(int j=i+1; j<data; j++){
			if(value[i]>value[j]){
				swap(value[i],value[j]);
			}
		}
	}
	cout << endl;
	cout <<"\nSorted data" << endl;
	for(int i=0; i<data; i++){
		cout << value[i];
		cout << endl;
	}
	
	int cari;
	cout << "\nEnter the value that is looking for: ";
	cin >> cari;
	int low, mid, high, indicator=0;
	low=0; high=data-1;
	while(indicator==0 && low<=high){
		mid=(low+high)/2;
		if(value[mid]==cari){
			indicator=1;
			break;
		}
		else if(value[mid]<cari){
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
		
	}
	if(indicator==1){
		cout << "Value found at the index to-" << mid << endl;
	}
	else{
		cout <<"Soryy, the value is not found." << endl;
	}
return 0;
}
