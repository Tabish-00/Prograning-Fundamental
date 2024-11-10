#include<iostream>
using namespace std;
 
int main(){
    int n;
    int i = 5;
    // cout<<"enter your no = ";
    // cin>>n;
    // while(n <= i){
    //     cout<<n<<" ";
    //     n++;
    // }
    int i = 0;
    int sum = 0;
    while(i <= n){
        sum*=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}