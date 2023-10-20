#include<iostream>
using namespace std;

struct employee{
    int eID;
    char favChar;
    float salary;
};
typedef struct employee{
    int eID;
    char favChar;
    float salary;
}cyber;

int main(){
    struct employee harry;
    harry.eID = 50;
    harry.favChar = 'X';
    harry.salary = 25687;
    cout<<"Harry's Emp ID : "<<harry.eID<<endl;
    cout<<"Harry's Fev Charecter : "<<harry.favChar<<endl;
    cout<<"Harry's Salary : "<<harry.salary<<endl;

    cyber pankaj;
    pankaj.eID = 55;
    pankaj.favChar = 'S';
    pankaj.salary = 21030;
    cout<<"Pankaj's Emp ID : "<<pankaj.eID<<endl;
    cout<<"Pankaj's Fev Charecter : "<<pankaj.favChar<<endl;
    cout<<"Pankaj's Salary : "<<pankaj.salary<<endl;
   
    return 0;
}