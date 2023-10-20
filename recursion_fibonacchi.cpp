#include<iostream>
using namespace std;

int fibo(int n){
    if (n<2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int num;
    cout<<"Input nth Number : ";
    cin>>num;

    for(int i = 0; i < num; i++){
        cout<<"The term in fibonacci sequence at position "<<i<<" is "<<fibo(i)<<endl;
    }
    
    return 0;
}