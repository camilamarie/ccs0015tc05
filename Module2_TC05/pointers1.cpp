#include<iostream>
using namespace std;

int main(){
    int var = 23;
    int *ptr;

    ptr = &var;

    cout << "Address of var: " << &var << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value of var: " << var << endl;
    cout << "Value of ptr: " << ptr << endl;

    *ptr = 25;
    cout << "Value of var using ptr: " << *ptr << endl;
    cout << "Value of var: " << var << endl;
}