#include <iostream>
#include <string>
#include "BinaryTree.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(2);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	
	bin.insert(35);
	
	return 0;
}
