#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter your no = ";
    cin>>n;
    int sum = 0;
    int oddsum = 0;
    for (int i = 0; i <= n; i++)
    {
        // sum += i;
        // if (i==5)
        // {
        //     break;
        // }

        //odd number
        if (i%2!=0)
        {
            oddsum+=i;
        }
        
        
    }
    // cout<<sum<<endl;
    cout<<oddsum<<endl;
    return 0;
}