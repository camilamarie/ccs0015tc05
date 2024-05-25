#include <iostream>
#include "dynintstack.h"
using namespace std;
int main()
{
    DynIntStack stack;
    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);
    cout << "Popping...\n";
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << "Attempting to pop again... ";
    stack.pop();
}