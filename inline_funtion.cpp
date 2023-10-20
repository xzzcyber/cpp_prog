#include<iostream>
using namespace std;

inline int product(int a, int b){ 
    //for short code it will make the program faster
    //ram will be used less
    //
    //don't use in static variable
    //don't use in recurtion
    return a*b;
}

int main(){
    int num1, num2;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;

    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;

    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;

    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;
    return 0;
}


