#include <iostream>
using namespace std;

// Define a struct named Address
struct Address {
    string street;
    string city;
    string state;
    string zipCode;
};

// Define a struct named Person, which contains an Address
struct Person {
    // Data members
    string name;
    int age;
    double height;
    Address address; // Nested Address struct
};
int main() {
    // Create an array of Person structs
    const int numPeople = 3;
    Person people[numPeople];

    // Assign values to each element in the array
    people[0].name="Ali";
    people[0].age=21;
    people[0].height=6.1;
    people[0].address.street="#7";
    people[0].address.city= "FSD";
    people[0].address.state = "PK";
    people[0].address.zipCode = "0001";

    people[1].name = "Bob";
    people[1].age = 25;
    people[1].height = 6.0;
    people[1].address.street = "456 Oak St";
    people[1].address.city = "Centerville";
    people[1].address.state = "OH";
    people[1].address.zipCode = "45459";

    people[2].name = "Charlie";
    people[2].age = 35;
    people[2].height = 5.8;
    people[2].address.street = "789 Pine St";
    people[2].address.city = "Greenville";
    people[2].address.state = "SC";
    people[2].address.zipCode = "29601";

    // Print the details of each person in the array
    for (int i = 0; i < numPeople; ++i) {
        cout << "Person " << (i + 1) << ":" << endl;
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Height: " << people[i].height << " feet" << endl;
        cout << "Address:" << endl;
        cout << "  Street: " << people[i].address.street << endl;
        cout << "  City: " << people[i].address.city << endl;
        cout << "  State: " << people[i].address.state << endl;
        cout << "  Zip Code: " << people[i].address.zipCode << endl;
        cout << "-----------------" << endl;
    }

    return 0;
}