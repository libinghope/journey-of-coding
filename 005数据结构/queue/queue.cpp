#include <iostream>
#include "dynamic_array_queue.hpp"
#include "linked_queue.hpp"
#include "circular_queue.hpp"
using namespace std;

void testArrayQueue(){
    ArrayQueue<int> aq(10);
    // for (int i = 0; i < 10; i++)
    // {
    //     aq.enqueue(i);
    // }
    // cout<<"ArrayQueue出栈:";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<aq.dequeue()<<"<--";
    // }
    aq.enqueue(1);
    cout<<"1------:"<<aq.dequeue()<<endl;
    aq.enqueue(2);
    aq.enqueue(3);
    cout<<"2------:"<<aq.dequeue()<<endl;
    aq.enqueue(4);
    cout<<"3------:"<<aq.dequeue()<<endl;
    cout<<"4------:"<<aq.dequeue()<<endl;

}

void testLinkedQueue(){
    LinkedQueue<int> lq;
    for (int i = 0; i < 10; i++)
    {
        lq.enqueue(i);
    }
    cout<<"LinkedQueue出栈:";
    for (int i = 0; i < 10; i++)
    {
        cout<<lq.dequeue()<<"<--";
    }
    cout<<endl;
}

void testCircularQueue(){
    CircularQueue<int> cq(5);
    for (int i = 0; i < 10; i++)
    {
        if(-1 == cq.enqueue(i)){
            cout << "circular queue is full"<<endl;
            break;
        };
    }
    cout<<"CircularQueue:";
    while(!cq.empty()){
        cout<<cq.dequeue()<<"<--";
    }
    cout<<endl;
}

int main()
{
    testArrayQueue();

    //testLinkedQueue();

    //testCircularQueue();

    CircularQueue<int> q(3);
    q.enqueue(1);
    cout<<"1-----------:"<<q.dequeue()<<endl;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<"2-----------:"<<q.dequeue()<<endl;
    cout<<"3-----------:"<<q.dequeue()<<endl;
    cout<<"4-----------:"<<q.dequeue()<<endl;

    return 0;
}

