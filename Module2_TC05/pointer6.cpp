#include<iostream>
#include<string>
using namespace std;

int main(){
    string* names;
    int size;

    cout << "How many names?: ";
    cin >> size;
    cin.ignore();

    names = new string[size];

    for(int i = 0; i < size; i++){
        cout << "Enter name # " << (i+1) << ": ";
        getline(cin, *(names+i));
    }

    cout << "\nNAMES:\n";
    for(int i = 0; i < size; i++){
        cout << *(names+i) << endl;
    }
}