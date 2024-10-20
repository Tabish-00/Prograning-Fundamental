#include<iostream>
using namespace std;

int main(){

// code for Grading
    int marks;
    cout<<"Enter yuor marks = ";
    cin>>marks;
    if (marks>=90)
    {
        cout<<"Grade is A";
    }
    else if (marks>=80 && marks < 90)
    {
        cout<<"Grade is B";
    }
    else
    {
        cout<<"Grade is C";
    }
    
    return 0;

}