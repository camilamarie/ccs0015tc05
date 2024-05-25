#include <iostream>
using namespace std;

class DynIntStack
{
private:
    struct StackNode
    {
        int value;
        StackNode *next;
    };
    StackNode *top;

public:
    DynIntStack();
    void push(int num);
    int pop();
    bool isEmpty();
};

//************************************************
// Construtor                                    *
// ***********************************************
DynIntStack::DynIntStack()
{
    top = NULL;
}

//************************************************
// Member function push pushes the argument onto *
// the stack. *
//************************************************
void DynIntStack::push(int num)
{
    StackNode *newNode;
    // Allocate a new node & store Num
    newNode = new StackNode;
    newNode->value = num;
    // If there are no nodes in the list
    // make newNode the first node
    if (isEmpty())
    {
        top = newNode;
        newNode->next = NULL;
    }
    else // Otherwise, insert NewNode before top
    {
        newNode->next = top;
        top = newNode;
    }
}

//****************************************************
// Member function pop pops the value at the top *
// of the stack off, and copies it into the variable *
// passed as an argument. *
//****************************************************
int DynIntStack::pop()
{
    int num;
    StackNode *temp;
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
    }
    else // pop value off top of stack
    {
        num = top->value;
        temp = top->next;
        delete top;
        top = temp;
        return num;
    }
}

//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise. *
//****************************************************
bool DynIntStack::isEmpty()
{
    if (top == NULL)
        return true;
    else
        return false;
}
