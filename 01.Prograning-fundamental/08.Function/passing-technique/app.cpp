#include <iostream>
using namespace std;

int passByValue(int z){

    cout<<"02. Print a adress before Changing = "<<&z<<" value is : "<<z<<endl;
    z = 100;
    cout<<"03. Print a address After Changing = "<<&z<<" value is : "<<z<<endl;

   return z;
};
int main(){
    int a = 5;
    cout<<"01. Before Calling the ftn = "<<&a<<" value is : "<<a<<endl;

    passByValue(a);
    cout<<"04. After Calling the ftn = "<<&a<<" value is : "<<a<<endl;

    cout<<"05. final value of a : "<<a<<endl;

    int ans = passByValue(a);
    cout<<"06. After returning the function : "<<&ans<<" value is "<<ans<<endl;
    
    return 0;
}