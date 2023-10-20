#include<iostream>
using namespace std;

int main(){
    int marks[] = {23, 45, 56, 89};
    marks[2] = 455; // The Value Is Now Changed
    
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<endl;

    cout<<"Printing Marks With For Loop"<<endl;
    for (int i = 0; i < 4; i++){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;

    cout<<"Printing Marks With While Loop"<<endl;
    int i = 0;
    while (i < 4){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    cout<<endl;

    cout<<"Printing Marks With Do-While Loop"<<endl;
    int j = 0;
    do{
        cout<<"The value of marks "<<j<<" is "<<marks[j]<<endl;
        j++;
    }while(j < 4);
    return 0;
}
