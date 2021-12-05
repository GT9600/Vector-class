#include <iostream>
#include "Vector.h"
using namespace std;

template<typename T>
    Vector<T>::Vector(){
        elements = new T[1];
        size = 0;
        capacity = 1;
    }
    //Contractor to create a vector with the given capacity
    template<typename T>
    Vector<T>::Vector(int n) {
        if (n < 0) {
            throw invalid_argument(" Out of bounds");
        }
        capacity = n;
        elements = new T[n];
        if (!elements)
            throw runtime_error(" Elements could not be created ");
        size = 0;
    }
//if size is over capacity, dump the old elements, double the capacity size and create a dynamic array with double the size as before
template<typename T>
    void Vector<T>::ensureCapacity() {
        if (size >= capacity) {
            T *old = elements;
            capacity = 2 * size;
            elements = new T[size * 2];

            for (int i = 0; i < size; i++)
                elements[i] = old[i];

            delete[] old;
        }
    }

//to add an item at the end of the vector
template<typename T>
    void Vector<T>::push(T value) {
        ensureCapacity();
        elements[size++] = value;
    }

//to remove and return the last valid element of the vector
template<typename T>
    T Vector<T>::pop() {
        if (size <= 0)
            throw runtime_error("SOrry, no elements left in vector!!");

        return elements[--size];
    }

// //to return the current size
template<typename T>
    int Vector<T>::getSize() const {
        return size;
    }

// to return the value of vector in the given index
template<typename T>
    T Vector<T>::get(int index){
        if (index < 0){
            throw invalid_argument("index is less than 0");
        }
        if (index < 0 || index >= size) {
            throw invalid_argument("index out of bounds"); //exception handling
        }
        return elements[index];
    }
//to update the item in the given index with value
template<typename T>
    void Vector<T>::set(int index, int value){
        if (index < 0 || index > size) //throwing exceptions
            throw invalid_argument("index out of bounds");

        elements[index] = value;
    }
//– to return the capacity
template<typename T>
    int Vector<T>::getCap(){
        return capacity;
    }




//
// Created by imcoo on 2021-12-02.
//

