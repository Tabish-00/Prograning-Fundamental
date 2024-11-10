#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 3;
    int c = 5;

    cout<<"a > b = "<< (a > b) <<endl;
    // cout<<"a < b = "<< (a < b) <<endl;
    // cout<<"a == b = "<< (a == b) <<endl;
    // cout<<"a != b = "<< (a != b) <<endl;

    cout<<"Logical"<<endl;
    cout<<"a > b = in NOT operator = "<< !(a > b) <<endl;

    // sum of two number
    int a, b;
    cout<<"Enter a value in a = ";
    cin>>a; 
    cout<<"Enter a value in b = ";
    cin>>b;

    int sum = a + b;
    cout << "Sum = "<< sum << endl; 

    return 0;

}