#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main()
{
    // Create an array of structures
    int size = 3;
    struct Point arr[size];


    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

    arr[1].x = 30;
    arr[1].y = 40;

    arr[2].x = 50;
    arr[2].y = 60;

    arr[3].x = 70;
    arr[3].y = 80;

    for (int i = 0; i <size; i++)
    {
        cout << arr[i].x << " " << arr[i].y<<endl;
    }
    
    return 0;
}
