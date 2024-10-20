#include <iostream>
using namespace std;

int getMin(int arr[], int n){
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini,arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
            return mini;
}
int getMax(int arr[], int n){
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
            return maxi;
}
int main(){

    int size;
    cout<<"Tell size of Array : ";
    cin>>size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter value of Array at index["<<i<<"]"<<" : ";
        cin>> arr[i];
    }
    
    cout <<"Minimum Value is "<< getMin(arr,size)<<endl;
    cout <<"Maximum Value is "<< getMax(arr,size)<<endl;

    return 0;

}