#include "Stack.h"
#include <iostream>

using namespace std;

//constructer 
template <typename T>
Stack<T>::Stack(int size)
{
    this->top = 0;
    this->size = 10;
    arrElement = new T[size];
}

//destructor
template <typename T>
Stack<T>::~Stack()
{
    delete[] arrElement;
}

//kiem tra ham rong
template <typename T>
bool Stack<T>::isEmpty()
{
    if (this->top == 0)
        return true;
}

//them phan tu moi vao stack
template <typename T>
void Stack<T>::push(T newElement)
{
    if (this->top >= size ) {
        cout << "Stack day" << endl;
        return;
    }arrElement[++top] = newElement;
}

//lay mot phan tu ra khoi stack
template <typename T>
void Stack<T>::pop()
{
    if (this->top == 0) {
        cout << "stack rong" << endl;
        return;
    }
    arrElement[top--];
}

//lay gia tri o dau
template <typename T>
T Stack<T>::getTop()
{
    if (this->top == 0) {
        return 0;
    }return arrElement[top];
}

