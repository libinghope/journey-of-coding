#include<iostream>
#include "array_queue.hpp"
using namespace std;

int main(){
    ArrayQueue<int> aq(10);
    aq.enqueue(1);
    aq.enqueue(2);
    aq.enqueue(3);
    aq.enqueue(4);

    cout<< aq.dequeue()<<endl;
    cout<< aq.dequeue()<<endl;
    cout<< aq.dequeue()<<endl;
    cout<< aq.dequeue()<<endl;

    return 0;
}
