#include <iostream>
using namespace std;

struct Book {
    int ID;
    int pages;
};

int main()
{
    // Create an array of structures
    struct Book b[4] = {{2},{5, 700},{},{8,800}};

    for (int i = 0; i < 4; i++)
    {
       cout<<b[i].ID<<endl;
       cout<<b[i].pages<<endl;
       cout<<"---------------------------"<<endl;
    }
    
    return 0;
}
