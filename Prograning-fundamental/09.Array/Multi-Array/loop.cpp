#include <iostream>
using namespace std;

int main(){
    

    int arr[2][4] = {
        {1 , 2, 5, 6},
        {3 , 4, 7, 8}
    };

    for (int i = 0; i < 2; i++){
       for (int j = 0; j < 4; j++)
       {
        cout<<arr[i][j]<<endl;
       }   
    }
    
}