#include <iostream>
#include "Vector.h"
using namespace std;
//Contractor to create a vector with default capacity


//function to sort ints
int selectionSort(int arr[], int len);
int selectionSort(int arr[], int len){
    for (int i = 0; i < len; i++){
        int min = arr[i];
        int minIndex = i;
        for (int j = (i + 1); j < len; j++){
            if (min > arr[j]){
                min = arr[j];
                minIndex = j;
            }
        }
        if (minIndex != i){
            throw invalid_argument("index does not equal element in place");
        }
     }


}

int main(){
    try {
    int len = 10;
    int arr[10];

    int qTwo[5]{9, 6, 4, 2, 3};
    int length = 5;
    cout << "your array before sorting " << qTwo << endl;
    cout << "your array sorted.. " << selectionSort(qTwo, length) << endl;



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
