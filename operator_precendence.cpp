#include<iostream>
using namespace std;
int main(){
    // Operator Precedence
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}