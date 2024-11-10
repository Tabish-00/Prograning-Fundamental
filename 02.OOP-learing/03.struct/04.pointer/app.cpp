#include <iostream>
using namespace std;

struct Rectangle {
    int height;
    int width;
} s1;

int main(){
    Rectangle rect1 = {22,33};
    Rectangle* rect1ptr = &rect1;

    cout<<(*rect1ptr).height<<endl;
    cout<<(*rect1ptr).width<<endl;

    cout<<(rect1ptr)->height<<endl;
    cout<<(rect1ptr)->width<<endl;


    return 0;
}