class Node{
	
	public:
		int value;
		Node *next;
		
		
		Node(){
			next = NULL;
		}
		
	
};

class projectStack{
	
	public:
		Node *head;
		Node *tail;
	
		void stackPush(int);	
		void stackPop();	
		
		void printAll();
		
		projectStack(){
			head = tail = NULL;
		}
};
