//
// Created by Jorge Alvarado on 07/11/2019.
//

#include "tipos.h"

template <typename T>
class MyArray {
private:
    T* ptr;
    entero size;
public:
    MyArray(T *arr, entero s);
    T max();
    ~MyArray();
};

template <typename T>
MyArray<T>::MyArray(T *arr, entero s) {
    ptr = new T[s];
    size = s;
    for(entero i = 0; i < size; i++)
        ptr[i] = arr[i];
}
template <typename T>
T MyArray<T>::max() {
    T vmax = ptr[0];
    for (entero i = 1; i < size; i++){
        if (ptr[i] > vmax) vmax= ptr[i];
    }
    return vmax;
}

template <typename T>
MyArray<T>::~MyArray() {
    delete[] ptr;
    ptr = nullptr;
}

