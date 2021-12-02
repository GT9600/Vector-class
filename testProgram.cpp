#include <iostream>
#include <cstdlib>

using namespace std;
//Contractor to create a vector with default capacity
template <typename T> class Vector {

private:
    int* elements; //• A container (dynamic array) for storing the items of the same type (data)
    int size; //• A variable that keeps track of valid items in the vector (size)
    int capacity = 1; //A variable that keeps track of the capacity of container (capacity)

public:
    Vector(){
        elements = new T[1];
        size = 0;
        capacity = 1;
    }
    //Contractor to create a vector with the given capacity
    explicit Vector(int n) {
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

    void ensureCapacity() {
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
    void push(T value) {
        ensureCapacity();
        elements[size++] = value;
    }

//to remove and return the last valid element of the vector
    T pop() {
        if (size <= 0)
            throw runtime_error("SOrry, no elements left in vector!!");

        return elements[--size];
    }

// //to return the current size
    int getSize() const {
        return size;
    }

// to return the value of vector in the given index

    T get(int index){
        if (index < 0){
            throw invalid_argument("index is less than 0");
        }
        if (index < 0 || index >= size) {
            throw invalid_argument("index out of bounds"); //exception handling
        }
        return elements[index];
    }
//to update the item in the given index with value

    void set(int index, int value){
        if (index < 0 || index > size) //throwing exceptions
            throw invalid_argument("index out of bounds");

        elements[index] = value;
    }
//– to return the capacity
    int getCap(){
        return capacity;
    }
};

int main() {
    try {


        Vector<int> newVariable;
        newVariable.push(69);
        newVariable.push(71);
        newVariable.push(99);
        cout << newVariable.get(0) << " :getting variable at index 0" << endl << endl;
        newVariable.set(0, 30);
        cout << newVariable.get(0) << " :get variable at index 0" << endl << endl;
        cout << newVariable.getSize() << " :get size " << endl << endl;
        cout << newVariable.getSize() << " :Get size" << endl << endl;
        cout << newVariable.getCap() << " :Get capacity" << endl << endl;
        cout << newVariable.pop() << " :POP" << endl << endl;
        cout << newVariable.getSize() << " :Get size" << endl << endl;
        cout << newVariable.getCap() << " :Get capacity" << endl << endl;
        cout << newVariable.pop() << " :POP" << endl << endl;
        cout << newVariable.getSize() << " :Get size" << endl << endl;
        cout << newVariable.getCap() << " :Get capacity" << endl << endl;
        cout << newVariable.pop() << " :POP" << endl << endl;
    }
    catch (exception &x) {
        cout << "exception encountered: " << endl << x.what() << endl;
        
    }
    return 0;
}
