#include<iostream>
using namespace std;

float bankInterest(int money, float interest = 1.04){
    return money*interest;
}

int main(){
    int money = 10000;

    //If the value not provided the default will be calculated
    //If data provided in command the provided data will be calculated

    cout<<"For General Person: Benifit is : "<<bankInterest(money)<<endl;
    cout<<"For VIP: Benifit is : "<<bankInterest(money, 1.8)<<endl;
    cout<<"For Employee: Benifit is : "<<bankInterest(money, 1.10)<<endl;

    return 0;
}