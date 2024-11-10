#include <iostream>
using namespace std;

int main(){

    // int a = 10;
    // int* ptr = &a;

    // cout<<"value of a :"<<a<<endl;
    // cout<<"Address of a :"<<&a<<endl;
    // cout<<"value store in *ptr : "<<*ptr<<endl;
    // cout<<"Address store in ptr :"<<ptr<<endl;
    // cout<<"Address of *ptr : "<<&ptr<<endl;
    // cout<<"Size of a is : "<<sizeof(a)<<endl;
    // cout<<"Size of ptr is : "<<sizeof(ptr)<<endl;

    // *ptr = 20;
    // cout<<endl;
    // cout<<"Updated value of a :"<<a<<endl;
    // cout<<"Address of a : "<<&a<<endl;
    // cout<<"Updated value store in *ptr : "<<*ptr<<endl;
    // cout<<"Address store in ptr :"<<ptr<<endl;
    // cout<<"Address of *ptr : "<<&ptr<<endl;

    // double d = 10;
    // double* ptr2 = &d;

    // cout<<endl;
    // cout<<"Size of d is : "<<sizeof(d)<<endl;
    // cout<<"Size of ptr2 is : "<<sizeof(ptr2)<<endl;

    // Part 2
    int a = 10;
    int* ptr = &a;
    // cout<<"35. Address store in ptr :"<<ptr<<endl;
    // cout<<"36. Address of in &ptr :"<<&ptr<<endl;
    // ++(*ptr);
    // cout<<"38. Address store in ptr :"<<ptr<<endl;
    // cout<<"39. Updated Address store in &ptr :"<<&ptr<<endl;
    // cout<<"40. Value of *ptr is : "<<*ptr<<endl;
    // ++ptr;
    // cout<<*ptr<<endl;

    cout<<"before : "<<*ptr<<endl;
    (*ptr)++;
    cout<<"after : "<<*ptr<<endl;

    cout<<"before : "<<*ptr<<endl;
    (*ptr) = (*ptr)*2;
    cout<<"after : "<<*ptr<<endl;

    return 0;
}