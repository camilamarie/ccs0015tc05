#include<iostream>
#include<queue>

using namespace std;

struct Students{
    int id;
    string name;
};

int main(){
    // Declare a stak object
    // The queue will be implemented using a linked-list
    // The queue will accept the structure named Students
    //   as its elements
    queue < Students > records;
    // Variables for the input
    int id;
    string name;
    // Declare a structure variable
    Students record;

    while(true){
        cout << "Enter ID Number (-1 to stop): ";
        cin >> id;
        cin.ignore();

        // Sfront the input if the value of ID is less than 0
        if(id < 0) break;
        cout << "Enter name: ";
        getline(cin, name);

        // Set the values of the record
        record.id = id;
        record.name = name;

        // Push the new record to the queue;
        records.push(record);
    }

    cout << "Getting all records....\n";
    cout << "=======================================\n";
    while(!records.empty()){
        // Retrieves the values at the front of the queue
        record = records.front();
        // Display the data members of the structure
        cout << "ID: " << record.id << endl;
        cout << "Name: " << record.name << endl << endl;
        // Remove the front element from the queue
        records.pop();
    }
    cout << "=======================================\n";
}