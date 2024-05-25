#include<iostream>
using namespace std;

int main(){
    int *ptr1, *ptr2;

    ptr1 = new int;

    *ptr1 = 25;
    cout << "Address where ptr1 is pointing: " << ptr1 << endl;
    cout << "Value in ptr1: " << *ptr1 << endl;
    cout << "Address where ptr2 is pointing: " << ptr2 << endl;
    cout << "Value in ptr2: " << *ptr2 << endl;

    ptr2 = ptr1;
    cout << "\nAddress where ptr1 is pointing: " << ptr1 << endl;
    cout << "Value in ptr1: " << *ptr1 << endl;
    cout << "Address where ptr2 is pointing: " << ptr2 << endl;
    cout << "Value in ptr2: " << *ptr2 << endl;

    ptr1 = new int;
    *ptr1 = 23;
    cout << "\nAddress where ptr1 is pointing: " << ptr1 << endl;
    cout << "Value in ptr1: " << *ptr1 << endl;
    cout << "Address where ptr2 is pointing: " << ptr2 << endl;
    cout << "Value in ptr2: " << *ptr2 << endl;

    delete(ptr1);
    cout << "\nAddress where ptr1 is pointing: " << ptr1 << endl;
    cout << "Value in ptr1: " << *ptr1 << endl;
    cout << "Address where ptr2 is pointing: " << ptr2 << endl;
    cout << "Value in ptr2: " << *ptr2 << endl;
    
  	ptr1 = nullptr;
//	ptr1 = NULL;
    // cout << "\nAddress where ptr1 is pointing: " << ptr1 << endl;
    // cout << "Value in ptr1: " << *ptr1 << endl;
    // cout << "Address where ptr2 is pointing: " << ptr2 << endl;
    // cout << "Value in ptr2: " << *ptr2 << endl;
}