#include <iostream>
#include<string>
using namespace std;

class StackArray {
private:
    string stack_array[5];
    int top;
public:
    //constructor
    StackArray() {
        top = -1;
    }
    void push() {
        cout << "\nEnter a element: ";
        string element;
        getline(cin, element);

        if (top == 4) { //step 1
            cout << "Number of data exceeds the limit." << endl;
            return;
        }

        top++; //step 2

        stack_array[top] = element; //step 3
        cout << endl;
        cout << element << " ditambahkan(pushed)" << endl;

    }
    void pop() {
       
    }