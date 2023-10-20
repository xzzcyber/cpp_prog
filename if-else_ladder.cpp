#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Input Your Age To Check If You're Eligible To Party : ";
    cin >> age;
    if(age > 18){
        cout << "Welcome To Party!! ";
    }else if(age == 18){
        cout << "You Are Welcome Too!! ";
    }else if(age >= 1){
        cout << "Go Buy Toffie!! ";
    }else{
        cout << "Oh Hell No!! ";
    }
    
    return 0;
}