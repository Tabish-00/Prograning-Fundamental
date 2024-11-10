#include <iostream>
using namespace std;

struct student {
    string name;
    int stu_ID;
} s1;

int main(){

    s1.name = "Ali";
    s1.stu_ID = 12345;

    student s2 = s1;

    cout<<s2.name<<endl;
    cout<<s2.stu_ID<<endl;

    return 0;
}