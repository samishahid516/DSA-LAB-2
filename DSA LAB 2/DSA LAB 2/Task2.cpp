
#include<iostream>
#include "Stack.cpp"
using namespace std;

template <typename T>
void FindMaxMin(Stack<T>& stack, T& maxVal, T& minVal) {
    T temp;
    stack.Pop(temp);  

    maxVal = temp;
    minVal = temp;

    while (!stack.IsEmpty()) {
        stack.Pop(temp);

        if (temp > maxVal) maxVal = temp;
        if (temp < minVal) minVal = temp;
    }
}

int main() {
    Stack<int> IntStack;  
    int maxVal, minVal;

    IntStack.Push(10);
    IntStack.Push(50);
    IntStack.Push(20);
    IntStack.Push(30);
    IntStack.Push(40);

    FindMaxMin(IntStack, maxVal, minVal);

    cout << "Max Value: " << maxVal << endl;
    cout << "Min Value: " << minVal << endl;

    return 0;
}

