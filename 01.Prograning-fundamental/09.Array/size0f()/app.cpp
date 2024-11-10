#include <iostream>
using namespace std;

int main() {

    // int myNumbers[5] = {10, 20, 30, 40, 50};
    //     for (int i = 0; i < 5; i++) {
    //         cout << myNumbers[i] << "\n";
    //         }

    // Better

    // int myNumbers[5] = {10, 20, 30, 40, 50};
    //     for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
    //         cout << myNumbers[i] << "\n";
    //         }

    // Note that, in C++ version 11 (2011), you can also use the "for-each" loop,
    //  which is even cleaner and simpler:
    int myNumbers[5] = {10, 20, 30, 40, 50};
        for (int i : myNumbers) {
            cout << i << "\n";
            }

  return 0;
}
