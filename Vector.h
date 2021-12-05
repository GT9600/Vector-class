//
// Created by imcoo on 2021-12-02.
//

#ifndef ASN3_VECTOR_H
#define ASN3_VECTOR_H
template <typename T> class Vector {

private:
    int* elements; //• A container (dynamic array) for storing the items of the same type (data)
    int size; //• A variable that keeps track of valid items in the vector (size)
    int capacity; //A variable that keeps track of the capacity of container (capacity)
public:
    Vector();
    //Contractor to create a vector with the given capacity
    explicit Vector(int n);
//if size is over capacity, dump the old elements, double the capacity size and create a dynamic array with double the size as before

    void ensureCapacity();

//to add an item at the end of the vector
    void push(T value);

//to remove and return the last valid element of the vector
    T pop();

// //to return the current size
    int getSize() const;

// to return the value of vector in the given index

    T get(int index);
//to update the item in the given index with value

    void set(int index, int value);
//– to return the capacity
    int getCap();


};

#include "Vector.tpp"
#endif //ASN3_VECTOR_H
