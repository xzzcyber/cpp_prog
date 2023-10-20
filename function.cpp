#include<iostream>
using namespace std;

// Function Prototype
// type function-name (arguments);
int sum(int a, int b);
void g();

int main(){
    int num1, num2;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;

    int sum1 = sum(num1, num2); //num1 & num2 --> Actual Parameters
    cout<<"The sum is : "<<sum1<<endl;
    g();

    return 0;
}

int sum(int a, int b){ //a & b -->> Formal Parameters
    //Formal Parameters will take values from actual parameters
    int c = a+b;
    return c;
}
void g(){
    cout<<"\nGood Morning!! INDIA !!";
}
