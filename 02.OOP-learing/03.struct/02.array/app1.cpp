#include <iostream>
using namespace std;

// Define a struct named Person
struct Person {
    // Data members
    string name;
    int age;
    double height;
};

int main(){
// Create an array of Person structs
    const int numPeople = 4;
    Person people[numPeople];

    // Assign values to each element in the array
    people[0].name = "Ali";
    people[0].age = 21;
    people[0].height = 5.9;

    people[1].name = "Umer";
    people[1].age = 24;
    people[1].height = 5.10;

    people[2].name = "Musa";
    people[2].age = 25;
    people[2].height = 5.9;

    people[3].name = "Jawad";
    people[3].age = 31;
    people[3].height = 5.6;

    // Print the details of each person in the array
    for (int i = 0; i < numPeople; ++i)
    {
        cout<<"Name is "<<people[i].name<<", Age is "<<people[i].age<<" & height is "<<people[i].height<<endl;
    }
    
    return 0;
}