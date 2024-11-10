#include <iostream>
using namespace std;

struct student {
    string name;
    int stu_ID;
} s1;

int main(){
    // student s1;

    s1.name = "Ali";
    s1.stu_ID = 12345;

    cout<<s1.name<<endl;
    cout<<s1.stu_ID<<endl;

    return 0;
}