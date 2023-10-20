#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Input Data To Print Table : ";
    cin >> number;
    
    // do{
    //     loop body;
    //     updation;
    // }while(condition);

    int i = 1;

    do{
        cout << "The " <<i<< "th Value is : "<< i*number <<endl;
        i++;
    }while (i <= 10);
    
}