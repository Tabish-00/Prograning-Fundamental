#include <iostream>
using namespace std;

int main(){
    

    int arr[2][4] = {
        {1 , 2, 5, 6},
        {3 , 4, 7, 8}
    };

    cout<<arr[0][0]<<endl;
    cout<<arr[0][1]<<endl;
    cout<<arr[0][2]<<endl;
    cout<<arr[0][3]<<endl;
    
    cout<<arr[1][0]<<endl;
    cout<<arr[1][1]<<endl;
    cout<<arr[1][2]<<endl;
    cout<<arr[1][3]<<endl;
    cout<<endl;
    cout<<sizeof(arr[2][2]);
}