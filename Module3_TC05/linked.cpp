#include<iostream>
#include "list.h"

using namespace std;

int main(){
    List list;

    int val;
    // Enter values that will be inserted to the list
    while(true){
        cout << "Enter a value [-1 to end input]: ";
        cin >> val;
        if(val < 0) break;
        // Add the new node to the list
        list.insertNode(val);
    }
    list.displayList();
    // Delete values from the list
    while(true){
        cout << "\nEnter value to be deleted [-1 to stop]: ";
        cin >> val;
        if(val < 0) break;
        list.deleteNode(val);
        list.displayList();
    }
    // Destroy the whole list
    list.destroyList();
    list.displayList();
}