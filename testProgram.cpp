#include <iostream>
#include "Vector.h"
using namespace std;
//Contractor to create a vector with default capacity
int findMinIndex(int arr[], int lastIndex, int index) {
    if (index == lastIndex) {
        return index;
    }
    int min = findMinIndex(arr, lastIndex, index + 1);
    return ((arr[min] < arr[index])? min : index);
}

//function to sort ints
void selectionSort(int arr[], int len);
void selectionSort(int arr[], int len, int index) {
    for (int i = 0; i < len; i++){
        int min = arr[i];
        int minIndex = findMinIndex(arr, len - 1, i);
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
     }
}

int main(){
    try {
    int len = 10;
    int arr[10];

    int qTwo[5] = {9, 6, 4, 2, 3};
    int length = 5;
    cout << "your array before sorting\n";
    for (int i = 0; i < length; i++) {
        cout << qTwo[i];
    }
    cout << endl;
    selectionSort(qTwo, length, 0);
    cout << "Your array after sorting\n";
    for (int i = 0; i < length; i++) {
        cout << qTwo[i];
    }
    cout << endl;


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

        cout << "Question 2 " << endl;

    }
    catch (exception &x) {
        cout << "exception encountered: " << endl << x.what() << endl;
        
    }
    return 0;
}
