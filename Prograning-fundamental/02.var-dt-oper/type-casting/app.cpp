#include <iostream>
using namespace std;

int main(){

    char grade = 'A';
    grade--;
    int age = grade;
    
    cout<<"Age "<<age<<endl;
    cout<<"Interger store no of byte "<<sizeof(age)<<endl;

    // double price = 100.99;
    // int newprice = (int)price;
    // cout<<"Original price = "<<price<<endl;
    // cout<<"Original price = "<<sizeof(price)<<endl;
    // cout<<"Original Newprice = "<<newprice<<endl;
    // cout<<"Original Newprice = "<<sizeof(newprice)<<endl;

    return 0;
}