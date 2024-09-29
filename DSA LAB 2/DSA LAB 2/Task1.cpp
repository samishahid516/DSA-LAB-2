#include<iostream>
#include "Stack.cpp"
using namespace std;

int main() {
    Stack<int> IntStack;
    Stack<float> FloatStack;

    int data;
    float val;

    IntStack.Push(35);
    FloatStack.Push(3.1415927);

    cout << "The output of the program wil be :" << endl << endl;

    IntStack.Pop(data);
    cout << "  " << data << endl;

    FloatStack.Pop(val);
    cout << "  " << val << endl;
}