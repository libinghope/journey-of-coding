#ifndef __ARRAY_COMMON_H__
#define __ARRAY_COMMON_H__

// C++实现类似java中的ArrayList

#include <iostream>
#include <string.h>

template<typename T>

class ArrayList{
    public:
        ArrayList();
        // ~ArrayList();
        int add(T t);
        T getByIndex(int index);
        // int insertByIndex(int index);
        // int modifyByIndex(int index, T const value);
        // T search();
    private:
        T *tPtr;
        unsigned int size;
        unsigned int used_size = 0;
        unsigned int default_size = 10;
};

template<typename T>
ArrayList<T>::ArrayList(){
    this->tPtr = new T[default_size];
    size = default_size;
}

template<typename T>
int ArrayList<T>::add(T t){
    if(used_size >= size){
       T* new_tPtr = new T[size + default_size];
       if(NULL == new_tPtr){
           return -1;
       }
       memcpy(new_tPtr, tPtr, sizeof(T) * size);
       new_tPtr[size] = t;
       size += default_size;
       T* old_tPtr = this->tPtr;
       this->tPtr = new_tPtr;
       delete[] old_tPtr;
       old_tPtr = NULL;
    }else{
        tPtr[used_size] = t;
    }

    return ++used_size;
}

template<typename T>
T ArrayList<T>::getByIndex(int index){
    // if(index <0 || index > used_size){
    //     throw exception ;
    // }
    return tPtr[index];
}

#endif
