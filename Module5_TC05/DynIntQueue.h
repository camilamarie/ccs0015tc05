#include <iostream>
using namespace std;
class DynIntQueue
{
private:
    struct QueueNode
    {
        int value;
        QueueNode *next;
    };
    QueueNode *front, *rear;
    int numItems;
    
public:
    DynIntQueue();
    ~DynIntQueue();
    void enqueue(int num);
    int dequeue();
    bool isEmpty();
    void clear();
};
//************************
// Constructor *
//************************
DynIntQueue::DynIntQueue(void)
{
    front = NULL;
    rear = NULL;
    numItems = 0;
}
//************************
// Destructor *
//************************
DynIntQueue::~DynIntQueue()
{
    clear();
}
//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue. *
//********************************************
void DynIntQueue::enqueue(int num)
{
    QueueNode *newNode;
    newNode = new QueueNode;
    newNode->value = num;
    newNode->next = NULL;
    if (isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    numItems++;
}
//**********************************************
// Function dequeue removes the value at the *
// front of the queue, and copies it into num. *
//**********************************************
int DynIntQueue::dequeue()
{  
    int num;
    QueueNode *temp;
    if (isEmpty())
        cout << "The queue is empty.\n";
    else
    {
        num = front->value;
        temp = front->next;
        delete front;
        front = temp;
        numItems--;
        return num;
    }
}
//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise. *
//*********************************************
bool DynIntQueue::isEmpty()
{
    if (numItems > 0)
        return false;
    else
        return true;
}
//********************************************
// Function clear dequeues all the elements *
// in the queue. *
//********************************************
void DynIntQueue::clear()
{
    QueueNode *temp;
    while (!isEmpty())
    {
        temp = front->next;
        delete front;
    }
    front = NULL;
    rear = NULL;
    numItems = 0;
}