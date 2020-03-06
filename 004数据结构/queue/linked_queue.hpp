#ifndef __LINKED_QUEUE_HPP__
#define __LINKED_QUEUE_HPP__

template <typename T>
class LinkedQueueNode
{
public:
    LinkedQueueNode() {}
    LinkedQueueNode(T t) {}
    T t;
    T *next;
};

template <typename T>
class LinkedQueue
{
    LinkedQueue()
    {
        head = new LinkedQueueNode;
        head->next = nullptr;
        tail = head;
    }
    ~LinkedQueue()
    {
        while (head->next)
        {   
            LinkedQueueNode * p = head->next->next;
            delete head->netxt;
            head->next = p;
        }
        delete head;
    }

    int enqueue(T t){
        tail->next = new LinkedQueueNode(t);
        tail = tail->next;
    }

    T dequeue(){
        return head->next;
    }

private:
    length = 0;
    LinkedQueueNode *head = nullptr;
    LinkedQueueNode *tail = nullptr;
};
#endif
