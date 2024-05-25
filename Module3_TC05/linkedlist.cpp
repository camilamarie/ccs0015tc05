#include<iostream>
using namespace std;

struct Node{
    int value; // Data member
    Node *next; // The next pointer
} *head = NULL, *current, *previous, *nextNode;

// Node *head = NULL, *current, *previous;

// Prototypes for linked list operations
void appendNode(int);
void displayList();
void insertNode(int);
void deleteNode(int);
void destroyList();

int main(){
    int val;
    // Enter values that will be inserted to the list
    while(true){
        cout << "Enter a value [-1 to end input]: ";
        cin >> val;
        if(val < 0) break;
        // Add the new node to the list
        insertNode(val);
    }
    displayList();
    // Delete values from the list
    while(true){
        cout << "\nEnter value to be deleted [-1 to stop]: ";
        cin >> val;
        if(val < 0) break;
        deleteNode(val);
        displayList();
    }
    // Destroy the whole list
    destroyList();
    displayList();
}

// Function definition
void appendNode(int newValue){
    Node *newNode = new Node; // Create a new node
    newNode->value = newValue;
    newNode->next = NULL;

    if(head == NULL){ // The list is empty
        head = newNode;
    }else{ // If the list is not empty
        // Traverse the list to find the last node
        current = head;
        while(current->next != NULL){
            current = current->next;
        }
        // If the last node is already reached, append the new node
        current->next = newNode;
    }
    cout << "The new node is appended...\n";
}

void displayList(){
    if(head == NULL){
        cout << "The list is empty...\n";
    }else{
        cout << "\n\nDisplaying all values....\n";
        // Traverse the list up to the last node
        current = head;
        while(current != NULL){
            cout << current->value << endl;
            current = current->next;
        }
        cout << "End of list....\n\n";
    }
}

void insertNode(int newValue){
    Node *newNode = new Node; // Create a new node
    newNode->value = newValue; // Store data to the data member
    newNode->next = NULL; // Set the next pointer to NULL

    if(head == NULL){
        head = newNode;
    }else{
        // Traverse the list to find to correct position where the new node will be inserted
        current = head;
        previous = NULL;
        // Loop will stop if the new value is lesser than the current node
        // or the end of the list is reached
        // < - sort ascending
        // > - sort ascending
        while(current != NULL && current->value < newValue){
            previous = current;
            current = current->next;
        }
        // Insert the new node
        if(previous == NULL){
            // Make the new node as the first node in the list
            head = newNode;
            newNode->next = current;
        }else{
            // Break the link so that the new node can be inserted;
            previous->next = newNode;
            // Reconnect the link
            newNode->next = current;
        }
    }
    cout << "The new node is inserted...\n";
}

void deleteNode(int valueToDelete){
    // Variable used to flag the deletion operation
    bool found = false;

    if(head == NULL){
        cout << "List is empty...\n";
    }else{
        if(head->value == valueToDelete){
            // If the value to be delete is the first node
            // Temporarily set the current node to point to the second node in the list
            current = head->next;
            // Delete the current first node
            delete head;
            // Set the second nod as the new first node
            head = current;
            found = true;
        }else{
            // Traverse the list until the value to be deleted is found
            current = head;
            previous = NULL;
            while(current->value != valueToDelete){
                previous = current;
                current = current->next;
            }
            // If the value to be deleted is found
            if(current != NULL){
                // Break the link of the node that will be deleted
                previous->next = current->next;
                // Delete the node
                delete current;
                found = true;
            }
        }

        if(found){
            cout << "Value is now deleted...\n";
        }else{
            cout << "Value is not found in the list...\n";
        }
    }
}

void destroyList(){
    if(head == NULL){
        cout << "List is empty...\n";
    }else{
        // Traverse the list up to the last node
        current = head;
        while(current != NULL){
            // Get the next node to be deleted
            nextNode = current->next;
            // Delete the durrent node
            delete current;
            // Assign the next node to be deleted
            current = nextNode;
        }
        cout << "The list is now destroyed...\n";
        head = NULL;
    }
}