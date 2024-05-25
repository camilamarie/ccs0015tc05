#include<iostream>
#include<list>
#include<stack>

using namespace std;

struct Students{
    int id;
    string name;
};

int main(){
    // Declare a stak object
    // The stack will be implemented using a linked-list
    // The stack will accept the structure named Students
    //   as its elements
    stack < Students, list <Students> > records;
    // Variables for the input
    int id;
    string name;
    // Declare a structure variable
    Students record;

    while(true){
        cout << "Enter ID Number (-1 to stop): ";
        cin >> id;
        cin.ignore();

        // Stop the input if the value of ID is less than 0
        if(id < 0) break;
        cout << "Enter name: ";
        getline(cin, name);

        // Set the values of the record
        record.id = id;
        record.name = name;

        // Push the new record to the stack;
        records.push(record);
    }

    cout << "Getting all records....\n";
    cout << "=======================================\n";
    while(!records.empty()){
        // Retrieves the values at the top of the stack
        record = records.top();
        // Display the data members of the structure
        cout << "ID: " << record.id << endl;
        cout << "Name: " << record.name << endl << endl;
        // Remove the top element from the stack
        records.pop();
    }
    cout << "=======================================\n";
}