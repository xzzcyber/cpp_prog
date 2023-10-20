#include<iostream>
using namespace std;

union money{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 34; // able to show only one at a time.
    cout<<m1.rice;
   
    return 0;
}