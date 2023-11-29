#include <iostream>
#include "Stack.h"
#include "Stack.cpp"

using namespace std;

int main()
{
    Stack<int> p1(10);
    p1.push(5);
    p1.push(10);
    p1.push(2);
    p1.push(1);
    p1.push(22);
    p1.pop();
    int p2 = p1.getTop();
    cout << p2;
    // p1.pop();
    //p1.pop();
}