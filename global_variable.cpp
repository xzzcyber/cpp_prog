#include <iostream>   //iostream = Input Output Stream
using namespace std;
int glob_int = 14; //Global Variable
float glob_float = 3.14; //Global Variable
int value = 14; 
int main(){
    int local_int = 37; //Local Variable
    float local_float = 4.98; //Local Variable
    cout << glob_int <<endl;   //calling Global variable
    cout << glob_float <<endl; //calling Global variable
    cout << local_int <<endl;   //calling local variable
    cout << local_float <<endl; //calling local variable
    int value = 37; 
    cout << value <<endl;   //calling local variable
    cout << ::value <<endl; //'::'-> calling global variable
    return 0;               
}