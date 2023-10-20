#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Insert 1st Data: "; //Output Data,'<<'= Insertion Operator
    cin >> num1; //Input Data,'>>'= Insertion Operator
    cout << "Insert 2nd Data: "; //Output Data,'<<'= Insertion Operator
    cin >> num2;  //Input Data,'>>'= Insertion Operator
    //Adition And Show The Value Without Storing In Another Variable
    cout << "The Total Value: "<< num1+num2;
    return 0;
}