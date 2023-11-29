#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack
{
private:
    int top;
    int size;
    T* arrElement;

public:
    Stack(int size);
    ~Stack();
    bool isEmpty();
    void push(T newElement);
    void pop();
    int getSize() { return size; }
    T getTop();

};

#endif