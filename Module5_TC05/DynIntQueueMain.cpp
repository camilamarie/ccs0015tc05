// This program demonstrates the DynIntQeue class
#include <iostream>
#include "dynintqueue.h"
using namespace std;
int main()
{
    int value;
    DynIntQueue iQueue;
    cout << "Enqueuing items[-1 to stop]...\n";
    // Enqueue items.
    while(true)
    {
        cout << "Enter value to insert:  ";
        cin >> value;
        if(value < 0) break;
        iQueue.enqueue(value);
    }
    // Deqeue and retrieve all items in the queue
    cout << "The values in the queue were:\n";
    while (!iQueue.isEmpty())
    {
        cout << iQueue.dequeue()<< endl;
    }
}