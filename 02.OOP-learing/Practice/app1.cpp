#include <iostream>
using namespace std;

class Teacher {
    // properties
    private:
        double salary;
    public:
        string name;
        string dept;
        
        //constructor
    Teacher(){
        cout<<"I'm a constructor"<<endl;
    } 
    // parameterized constructor
    Teacher(string name,string dept,double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    } 
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
    Teacher t1("Ali","CS",100000);
    

    t1.changeDept("AI");

    t1.setsalary(450000);
    t1.setsalary(500000);


    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}