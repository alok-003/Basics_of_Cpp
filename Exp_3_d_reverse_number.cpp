//Alok Chawat
//PRN:23070123016
//Batch:EnTC A-1
//Experiment 3.d
//Program to take last five digits of PRN as input and reverse it
#include <iostream>
using namespace std;
int main(){
    int num,reversed_num;
    cout<<"Enter last five digits of your PRN: ";
    cin>>num;
    while(num>0){
        reversed_num = num%10;
        cout<<reversed_num;
        num = num/10;
    }
}
/*
**OUTPUT**
Enter last five digits of your PRN: 23016
61032
*/
