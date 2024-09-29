#include<iostream>
#include "Stack.h"
using namespace std;

template<class ItemType>
Stack<ItemType>::Stack() {
	maxStack = 500;
	top = -1;
	items = new ItemType[maxStack];
}

template<class ItemType>
Stack<ItemType>::Stack(int max) {
	maxStack = max;
	top = -1;
	items = new ItemType[maxStack];
}

template<class ItemType>
Stack<ItemType>::~Stack() {
	delete[] items;
}

template<class ItemType>
int Stack<ItemType>::IsEmpty() const {
	return top == -1;
}

template<class ItemType>
int Stack<ItemType>::IsFull() const {
	return top == maxStack - 1;
}

template<class ItemType>
void Stack<ItemType>::Push(ItemType newItem) {
	if (IsFull()) {
		cout << "Stack is full" << endl;
		return;
	}
	top++;
	items[top] = newItem;
}

template<class ItemType>
void Stack<ItemType>::Pop(ItemType& item) {
	if (IsEmpty()) {
		cout << "Stack is empty" << endl;
		return;
	}
	item = items[top];
	top--;
}