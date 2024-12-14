#include <iostream>
using namespace std;
//*********Inheritance Example************
//Car is "IS-A" Vehicle
class Vehicle {
private:
    int speed;
public:
    Vehicle() {
        speed = 0;
        cout << "\nVehicle constructor" << endl;
    }
    void setSpeed(int spd) {
        speed = spd;
    }
    int getSpeed() {
        return speed;
    }
    void start() {
        cout << "\nStart Vehicle" << endl;
    }
    void stop() {
        cout << "\nStop Vehicle" << endl;
    }
};
class Car : public Vehicle {
private:
    int wheels;
public:
    Car() {
        wheels = 0;
        cout << "\nCar constructor" << endl;
    }
    void accelerate() {
    //    int a  = ++getspeed();
    // setspeed(a):
        cout << "\nCar accelerating" << endl;
    }
};


int main()
{
    Car c1;
    // c1.start();
    // c1.accelerate();
    // c1.stop();
    return 0;
}

