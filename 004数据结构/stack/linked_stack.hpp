#ifndef __LINK_STACK_H__
#define __LINK_STACK_H__
#include<iostream>

template<typename T>
class LinkStackNode
{
    public:
    LinkStackNode<T>(){}
    LinkStackNode<T>(T _t){ t = _t; }
    T t;
    LinkStackNode* next;
};
template<typename T>
class LinkStack{
    public:
    LinkStack<T>(){
        top = new LinkStackNode<T>();
        top->next = NULL;
    }

    ~LinkStack(){
        LinkStackNode<T>* p = NULL;
        while (top->next){
            p = top->next;
            top->next = top->next->next;
            delete p;
        }
        delete top;
        top = NULL;
    }

    T pop(){
        LinkStackNode<T>* p = top->next;
        if(p){
            top->next = top->next->next;
            return p->t;
        }
        return NULL;
    } 
        
    void push(T t){
        if(!top->next){
            top->next = new LinkStackNode<T>(t);
            return;
        }
        LinkStackNode<T> * p = top->next;
        top->next = new LinkStackNode<T>(t);
        top->next->next = p;
    }

    bool isEmpty(){
        return NULL == this->top->next;
    }

    private:
    LinkStackNode<T>* top;
};

#endif