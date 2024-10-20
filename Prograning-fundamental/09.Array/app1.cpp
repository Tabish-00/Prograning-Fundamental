#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"write size of Array : ";
    cin>>n;

    // Declare Array

    // int myarr[n] = {0,1,2};

    // int myarr[10] = {0};   // All are 0
    int myarr[10] = {1};   // here output  1 0 0 0 0 0 0 0 0 0 

    // Accessing an Element of an Array in C++
    for (int i = 0; i < n; i++)
    {
        // cout<<i<<". "<<myarr[i]<<endl;
        cout<<myarr[i]<<" ";
    }
    
    

}