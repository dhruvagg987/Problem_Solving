#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    while(n>0){
        cin>>arr[n-1];
        sum+=arr[n-1];
        n--;
    }
    cout<<sum;
    return 0;
}
