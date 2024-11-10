#include <iostream>
using namespace std;

int power(){

     int a,b;
    cout<< "Enter a number : ";
    cin>>a>>b;

    int ans = 1;
    
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    
    return ans;
}

// int sum(int a, int b){
//    int sum = a + b;
//    return sum;
// }

int main(){

     int n;
    cout<<"Tell me how many time function Call : ";
    cin>>n;
   for (int i = 1; i <= n; i++)
   {
    //  int a,b;
    // cout<<"Enter first value : ";
    // cin>>a;
    // cout<<"Enter second value : ";
    // cin>>b;

    int result = power();
    cout<<result<<endl;
   }

//     for (int i = 1; i <= n; i++)
//    {
//      int a,b;
//     cout<<"Enter first value : ";
//     cin>>a;
//     cout<<"Enter second value : ";
//     cin>>b;

//     int result = sum(a,b);
//     cout<<result<<endl;
//    }
   

}