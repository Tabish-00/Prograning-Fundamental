#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {

    // Access Modifier
    private:
        int health;
    public:
    // properties
        char name[100];
        char level;
    // Default constructor
    Hero (){
        cout<<"welcome to Contructor"<<endl;
    }


    int gethealth(){
        return health;
    }


    void sethealth(int h){
        health = h;
    }
};


int main(){

    // create an 
    
    Hero ali;  // constructor called statically

    // Dynamically constructor called

    Hero* h = new Hero;
    
    // cout<<"size odf ali is :"<<sizeof(ali)<<endl;

    // cout<<"Health is : "<<ali.gethealth()<<endl;

    // ali.level = 'A';
    // ali.sethealth(70);

    // cout<<"After update, Health is : "<<ali.gethealth()<<endl;
    // cout<<"level is : "<<ali.level<<endl;


    // cout<<"size : "<<sizeof(h1)<<endl;   
    return 0;
}