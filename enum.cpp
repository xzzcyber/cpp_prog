#include<iostream>
using namespace std;
int main(){
    enum datatype {first, second, third};
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<third<<endl<<endl;

    datatype m1 = first;
    cout<<m1<<endl;
    return 0;
}