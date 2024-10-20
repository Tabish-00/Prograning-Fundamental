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


    int gethealth(){
        return health;
    }


    void sethealth(int h){
        health = h;
    }
};


int main(){

    // create an object
    Hero ali;
    //  static memory allocation
    cout<<"Health is : "<<ali.gethealth()<<endl;

    // access properties
    ali.level = 'A';
    ali.sethealth(70);

    cout<<"After update, Health is : "<<ali.gethealth()<<endl;
    cout<<"level is : "<<ali.level<<endl;

    // Dynamic Memory Allocation
    Hero *Umer = new Hero;
    (*Umer).level = 'D';
    Umer->sethealth(70);
    cout<<"After Dynamic Memory Allocation, Health is : "<<(*Umer).gethealth()<<endl;
    cout<<"Dynamic Memory Allocation level is : "<<(*Umer).level<<endl;

    Umer->level = 'E';

    cout<<"After Dynamic Memory Allocation, Health is : "<< Umer->gethealth()<<endl;
    cout<<"Dynamic Memory Allocation level is : "<<Umer->level<<endl;

      // Manually delete the dynamically allocated object
    delete Umer;

    return 0;

}