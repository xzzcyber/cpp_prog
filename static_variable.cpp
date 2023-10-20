#include<iostream>
using namespace std;

int product(int a, int b){ 
    static int c = 0; //This will execute only 1st time the function call
    c = c + 1; //everytime program call afterwords the value increse by 1
    return a*b+c;
}

int main(){
    int num1, num2;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;

    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;
    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;
    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;
    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;
    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;
    cout<<"Multiplied Value is : "<<product(num1, num2)<<endl;

    return 0;
}


