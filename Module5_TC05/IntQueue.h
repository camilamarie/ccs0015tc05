#include <iostream>
using namespace std;

class IntQueue
{
private:
    int *queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;

public:
    IntQueue(int);
    ~IntQueue();
    void enqueue(int);
    int dequeue();
    bool isEmpty();
    bool isFull();
    void clear();
};
//*************************
// Constructor *
//*************************
IntQueue::IntQueue(int s)
{
    queueArray = new int[s];
    queueSize = s;
    front = -1;
    rear = -1;
    numItems = 0;
}
//*************************
// Destructor *
//*************************
IntQueue::~IntQueue()
{
    delete[] queueArray;
}
//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue. *
//********************************************
void IntQueue::enqueue(int num)
{
    if (isFull())
        cout << "The queue is full.\n";
    else
    {
        // Calculate the new rear position
        // rear = (rear + 1) % queueSize;
        rear = rear + 1; // rear++;
        // Insert new item
        queueArray[rear] = num; // queueArray[++rear] = num;
        // Update item count
        numItems++;
    }
}
//*********************************************
// Function dequeue removes the value at the *
// front of the queue, and copies t into num. *
//*********************************************
int IntQueue::dequeue()
{
    int num;
    if (isEmpty())
        cout << "The queue is empty.\n";
    else
    {
        // Move front
        // front = (front + 1) % queueSize;
        front = front + 1; // front++;
        // Retrieve the front item
        num = queueArray[front];
        // Update item count
        numItems--;
        return num;
    }
}
//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise. *
//*********************************************
bool IntQueue::isEmpty()
{
    if (numItems > 0)
        return false;
    else
        return true;
}
//********************************************
// Function isFull returns true if the queue *
// is full, and false otherwise. *
//********************************************
bool IntQueue::isFull()
{
    if (numItems < queueSize)
        return false;
    else
        return true;
}
//*******************************************
// Function clear resets the front and rear *
// indices, and sets numItems to 0. *
//*******************************************
void IntQueue::clear()
{
    front = -1;
    rear = -1;
    numItems = 0;
}
