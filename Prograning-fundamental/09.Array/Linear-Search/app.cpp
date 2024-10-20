#include <iostream>
using namespace std;

void updatearr(int arr[], int n){


    for (int i = 0; i < n; i++)
    {
       
        cout<<arr[i]<<" ";
        arr[0] = 120;
    }
}

int main(){
    
    int size;
    cout<<"Size of Array : ";
    cin>>size;

    int arr[size]={11,45,50};

    updatearr(arr,size);
    cout<<endl<<"done"<<endl;


    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}