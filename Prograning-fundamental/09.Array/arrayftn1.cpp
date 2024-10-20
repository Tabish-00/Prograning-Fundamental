#include <iostream>
using namespace std;

void myArrFtn(char ch[], int n){
    for (int i = 0; i < n; i++)
    {
        // cout<<a[i]<<" ";
        cout<<ch[i]<<" ";
    } 
}

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    char ch[n]= {'a','b','c'};
    myArrFtn(ch, n);
    //  for (int i = 0; i < n; i++)
    // {
    //     cout<<ch[i]<<" ";
    // }
}