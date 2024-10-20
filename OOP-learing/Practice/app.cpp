#include <iostream>
using namespace std;

class Hero {
    private:
        int health;
    public:
        char level;
    
    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health = h;
    }
};

int main(){
    Hero ali;
    cout<<"size of ali is :"<<sizeof(ali)<<endl;
    cout<<"Health is : "<<ali.gethealth()<<endl;
    ali.level='A';
    ali.sethealth(70);
    cout<<"updated, Health is : "<<ali.gethealth()<<endl;
    cout<<"Level is : "<<ali.level<<endl;



    return 0;
}