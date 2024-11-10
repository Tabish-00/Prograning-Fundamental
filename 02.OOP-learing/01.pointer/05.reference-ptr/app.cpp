#include <iostream>
using namespace std;

int main(){

    int i =5;
    int &j = i;
    i++;
    j++;
    i+=10;
    cout<<"Updated value is : "<<i<<endl;
    cout<<"Updated value is : "<<j<<endl;
    return 0;
}