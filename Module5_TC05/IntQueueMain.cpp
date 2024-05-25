// This program demonstrates the IntQeue class
#include <iostream>
#include "intqueue.h"
using namespace std;
int main()
{
    int size, value;
    cout << "How many numbers to insert?: ";
    cin >> size;
    IntQueue iQueue(size);
    cout << "Enqueuing " << size << " items...\n";
    // Enqueue items.
    for (int x = 1; x <= size; x++)
    {
        cout << "Enter value to insert:  ";
        cin >> value;
        iQueue.enqueue(value);
    }
        
    // Attempt to enqueue a another item when queue is full.
    cout << "Now attempting to enqueue again...\n";
    iQueue.enqueue(123); // Will that the queue is full
    // Deqeue and retrieve all items in the queue
    cout << "The values in the queue were:\n";
    while (!iQueue.isEmpty())
    {
        int value = iQueue.dequeue();
        cout << value << endl;
    }
    // Try to dequeue again....
    iQueue.dequeue(); // Will show that queue is empty
}