#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int ptr1 = x;
    int* ptr2 = &ptr1;
    cout<<*ptr2<<endl;
    ptr1 = 6;
    cout<<*ptr2<<endl;
    *ptr2= ptr1 + 1;
    cout<<*ptr2<<endl;



    return 0;
}