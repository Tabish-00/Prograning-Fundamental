#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {

    // Access Modifier
    private:
        int health;
    public:
    // properties
        string name;
        int age;
    // Default constructor
    Hero (){
        cout<<"welcome to Parameterized contructor"<<endl;
    }
    Hero (string name,int age){
        this -> name = name;
        this -> age = age;
    }

    int gethealth(){
        return health;
    }


    void sethealth(int h){
        health = h;
    }

    void getinf0(){
        cout<<"name :"<<this -> name<<endl;
        cout<<"age :"<<this -> age<<endl;
    }
};


int main(){

    // create an object
    
    Hero h1("ali",21);  // paramerized constructor called statically
    h1.getinf0();

    // Dynamically constructor called

    // Hero* h = new Hero;
    
    // cout<<"size odf ali is :"<<sizeof(ali)<<endl;

    // cout<<"Health is : "<<ali.gethealth()<<endl;

    // ali.level = 'A';
    // ali.sethealth(70);

    // cout<<"After update, Health is : "<<ali.gethealth()<<endl;
    // cout<<"level is : "<<ali.level<<endl;


    // cout<<"size : "<<sizeof(h1)<<endl;   
    return 0;
}