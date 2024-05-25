#include<iostream>
using namespace std;

void change(int*);

int main(){
    int number;

    cout << "What is your favorite number?: ";
    cin >> number;
    change(&number);
    cout << "Oh, your favorite number is: " << number << endl;
}

void change(int* c){
    *c = 23;
}