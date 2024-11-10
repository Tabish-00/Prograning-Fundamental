#include <iostream>
using namespace std;



struct Rectangle {
    int* width;
    int height;
};

int main(){

    int w = 3;
	Rectangle rect1 = {&w , 5};
    Rectangle* rectPtr = &rect1;  // Create a pointer to the Rectangle object

    cout << "Width: " << *rect1.width << ", Height: " << rect1.height << endl;

    cout<<"------------------------------------------------"<<endl;

	*rect1.width = 2;
	rect1.height = 4;

    cout << "Width: " << *rect1.width << ", Height: " << rect1.height << endl;

    cout<<"------------------------------------------------"<<endl;


    *rectPtr->width = 5;  // Using arrow operator to access width through pointer
    rectPtr->height = 9;  // Using arrow operator to access height through pointer

    cout << "Width: " << *rectPtr->width << ", Height: " << rectPtr->height << endl;

}
