#ifndef __ARRAY_COMMON_H__
#define __ARRAY_COMMON_H__

// C++实现类似java中的ArrayList

#include <iostream>
#include <string.h>

template<typename T>

class ArrayList{
    public:
        ArrayList();
        ~ArrayList();
        int add(T t);
        T getByIndex(int index);
        int insertByIndex(T t, int index);
        // int modifyByIndex(int index, T const value);
        // T search();
        int reSize(int size = 10);
    private:
        T *tPtr;
        unsigned int size;
        unsigned int used_size = 0;
        unsigned int default_capacity = 10;
};

template<typename T>
ArrayList<T>::ArrayList(){
    this->tPtr = new T[default_capacity];
    size = default_capacity;
}

template<typename T>
ArrayList<T>::~ArrayList(){
    if(this->tPtr){
        delete[] this->tPtr;
        tPtr = NULL;
    }
}

template<typename T>
int ArrayList<T>::reSize(int resize){
    T* new_tPtr = new T[this->size + resize];
    memcpy(new_tPtr, tPtr, sizeof(T) * size);
    size += resize;
    T* old_tPtr = this->tPtr;
    this->tPtr = new_tPtr;
    delete[] old_tPtr;
    old_tPtr = NULL;
    return 0;
}

template<typename T>
int ArrayList<T>::add(T t){
    if(used_size >= size){
        this->reSize(default_capacity)；
    }else{
        tPtr[used_size] = t;
    }

    return ++used_size;
}

template<typename T>
T ArrayList<T>::getByIndex(int index){
    return tPtr[index];
}

template<typename T>
int ArrayList<T>::insertByIndex(T t, int index){
    T* new_tPtr = new T[this->size + default_capacity];
    memcpy(new_tPtr, tPtr, sizeof(T) * index);
    memcpy(&new_tPtr[index+1], &tPtr[index], sizeof(T) * (size-index));
    new_tPtr[index] = t;
    T* old_tPtr = this->tPtr;
    this->tPtr = new_tPtr;
    delete[] old_tPtr;
    old_tPtr = NULL;
    this->size += default_capacity;
    ++this->used_size
}
#endif
