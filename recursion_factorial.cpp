#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1); 
    //How the program works ?
    //Step by step calculation of factorial(4)
    //factorial(4) = 4 * factorial(3)
    //factorial(3) = 12 * factorial(2)
    //factorial(2) = 24 * factorial(1)
    //factorial(1) = 24 
}
int main(){
    int num;
    cout<<"Input a Number : ";
    cin>>num;

    cout<<"Factorial is : "<<factorial(num);

    return 0;
}