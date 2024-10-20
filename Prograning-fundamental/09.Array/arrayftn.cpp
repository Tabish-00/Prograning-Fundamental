#include <iostream>
using namespace std;

void arr(int myarr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<myarr[i]<<endl;
    }
    cout<<"Done";
}

int main(){
    
    
    int n;
    cout<<"Array Size : ";
    cin>>n;
    int a[n]={1,2,3,4,5};
    arr(a,n);
}