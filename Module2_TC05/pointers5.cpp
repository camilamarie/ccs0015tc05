#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    int size = sizeof(arr)/sizeof(int);

    for(int i = 0; i < size; i++){
        cout << *(ptr+i) << endl;
    }
    
}