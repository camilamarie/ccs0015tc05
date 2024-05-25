#include<iostream>
using namespace std;

typedef struct Students{
    string name;
    int id;
} std;

int main(){
    typedef double dbl;
    typedef int* intptr;

    dbl d = 123.345;

    std s;
    s.id = 123;
    s.name = "Joseph";

    intptr p1, p2;
}