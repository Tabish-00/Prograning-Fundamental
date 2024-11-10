#include <iostream>
using namespace std;

struct student {
    string name;
    int stu_ID;
};

int main(){
    student s1 = { "Ali", 123456789};

    cout<<s1.name<<endl;
    cout<<s1.stu_ID<<endl;

    student s2 = s1;

    cout<<s2.name<<endl;
    cout<<s2.stu_ID<<endl;

    return 0;
}