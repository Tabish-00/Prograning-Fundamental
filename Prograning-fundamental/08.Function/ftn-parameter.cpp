#include <iostream>
using namespace std;

int sum(int a,int b){
   int sum = a+b;
    return sum;   
};

int main(){
    int a;
    cout<<"Enter a number = ";
    cin>>a;
    int b;
    cout<<"Enter a number = ";
    cin>>b;
    int result = sum(a,b);

    cout<<result<<endl;

    return 0;
}