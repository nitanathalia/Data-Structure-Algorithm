#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char** argv){
	
	projectStack stack1;
	
	stack1.stackPush(15);
	stack1.stackPush(12);
	stack1.stackPush(111);
	stack1.stackPush(18);
	stack1.stackPush(9);
	
	stack1.printAll();
	
	stack1.stackPop();
	stack1.stackPop();
	stack1.printAll();
	
	return 0;
}
