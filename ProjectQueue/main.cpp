#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue myQueue;
    myQueue.enqueue(14);
    myQueue.enqueue(8);
    myQueue.enqueue(45);
    myQueue.enqueue(1);
    myQueue.enqueue(0);
    myQueue.printElement();

   

    return 0;
}
