#include <iostream>
#include "intstack.h"
using namespace std;
int main()
{
    IntStack stack(5);
    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);
    cout << "Pushing 20\n";
    stack.push(20);
    cout << "Pushing 25\n";
    stack.push(25);
    cout << "Pushing 30\n";
    stack.push(30);
    cout << "Popping...\n";
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    stack.pop();
}
