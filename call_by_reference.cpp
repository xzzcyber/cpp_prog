#include<iostream>
using namespace std;

//Call By Reference Using Pointers
//If The Location of Data is targeted to calculation. Data Can Change
void swap(int *a, int *b){ // * --> Address of Value
    int temp = *a; // storing value at address "a" to temp
    *a = *b; // storing value at address "b" to address "a"
    *b = temp; //storing value at temp to value at "b"
}

//Call By Reference Using C++ Reference Variables
//If The Location of Data is targeted to calculation. Data Can Change
void swapRefVer(int &a, int &b){ // & --> Value at Address
    int temp = a; // storing value at address "a" to temp
    a = b; // storing value at address "b" to address "a"
    b = temp; //storing value at temp to value at "b"
}

int main(){
    int num1, num2;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;

    cout<<endl<<"The 1st Value Before Swap is : "<<num1<<endl;
    cout<<"The 2nd Value Before Swap is : "<<num2<<endl;

    //swap(&num1, &num2); //Call By Reference Using Pointers
    swapRefVer(num1, num2); //Call By Reference Using C++ Reference Variables
    cout<<"The 1st Value After Swap is : "<<num1<<endl;
    cout<<"The 2nd Value After Swap is : "<<num2<<endl;

    return 0;
}


