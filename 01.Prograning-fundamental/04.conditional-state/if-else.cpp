#include<iostream>
using namespace std;

int main(){

// code for voting
    // int age;
    // cout<<"Enter yuor age = ";
    // cin>>age;
    // if(age >= 18){
    //     cout<<"you are eligible for voting."<<endl;
    // }else{
    //     cout<<"you are not eligible for voting."<<endl;
    // }

    //code for even or odd number
    int n;
    cout<<"Enter a no = ";
    cin>>n;
    // if (n%2==0)
    // {
    //     cout<<"Even Number\n";
    //     cout<<"bye";
    // }
    // else
    // {
    //     cout<<"Odd Number";
    // }
    
    //Ternary operator
    string result = (n%2==0) ? "Even Number\n" : "Odd Number";
    cout<<result;
    return 0;

}