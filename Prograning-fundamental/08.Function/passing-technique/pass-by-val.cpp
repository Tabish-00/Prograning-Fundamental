#include <iostream>
using namespace std;

void passByValue(int z){

    cout<<"Print a number before Changing = "<<z<<endl;
    z = 100;
    cout<<"Print a number After Changing = "<<z<<endl;

   
};

int main(){
    int a = 5;
    cout<<"Before Calling the ftn = "<<&a<<endl;

    passByValue(a);
    cout<<"After Calling the ftn = "<<&a<<endl;

    cout<<"final value of a : "<<a<<endl;
    
    return 0;
}