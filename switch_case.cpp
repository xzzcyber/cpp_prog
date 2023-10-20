#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Input Value Between 1-4: ";
    cin >> age;
    switch (age){
    case 1:
        cout << "The Value Is : "<<age<<endl;
        break;
    case 2:
        cout << "The Value Is : "<<age<<endl;
        break;
    case 3:
        cout << "The Value Is : "<<age<<endl;
        break;
    case 4:
        cout << "The Value Is : "<<age<<endl;
        break;
    default:
        cout << "Not A Valid Case"<<endl;
        break;
    }
}