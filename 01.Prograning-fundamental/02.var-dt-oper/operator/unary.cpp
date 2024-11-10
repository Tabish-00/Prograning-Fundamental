#include<iostream>
using namespace std;

int main(){
    int a = 10;
   
    cout<<"a = "<<a<<endl;
    int sum = ++a;
    cout<<"++a = "<<sum<<endl;

    int sum1 = a++;
    cout<<"a++ = "<<sum1<<endl; 
    cout<<"a = "<<a<<endl;

    // int Dec = --a;
    // cout<<"--a = "<<Dec<<endl;

    // int Dec1 = a--;
    // cout<<"a-- = "<<Dec1<<endl; 
    // cout<<"a = "<<a<<endl;

    return 0;

}