#include<iostream>
using namespace std;
int main(){
    // What is pointer ?
    // data type which holds the address of other data types

    int a=3;
    cout<<"Value of a : "<<a<<endl; //& -> Address of Operator
    cout<<"Address of a : "<<&a<<endl;

    int *b = &a;  // * --> Reference Operator, & --> Address of Operator
    cout<<"Address of a : "<<b<<endl;
    // * --> Value at Address Operator
    cout<<"The Value of address b : "<<*b<<endl;

    int **c = &b;
    // ** --> Pointer to Pointer
    cout<<"The Value in a is : "<<a<<endl; //value of a
    cout<<"The Value in b is : "<<b<<endl; //Address of a
    cout<<"The Value of Address stored in b is : "<<*b<<endl; //value of a
    cout<<"The Value of c is : "<<c<<endl; //Address of b
    cout<<"The Value at address value_at(value_at(c))in c is : "<<**c<<endl; //value of a 

    return 0;
}