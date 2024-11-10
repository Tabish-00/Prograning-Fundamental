#include <iostream>
using namespace std;

class Teacher {
    // properties
    private:
        double salary;
    public:
        string name;
        string dept;
    // Method OR Member function
    void changeDept (string newdept){
        dept = newdept;
    }
   
    // Setter
    void setsalary(double s){
        salary = s;
    }
       // getter
    double getsalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Ali";
    t1.dept = "AI";

    t1.changeDept("CS");

    t1.setsalary(450000);
    t1.setsalary(500000);


    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}