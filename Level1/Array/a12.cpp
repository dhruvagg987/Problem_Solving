#include<iostream>
using namespace std;
int main()
{
    int n,i,ct=0,t=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0){ct++;t+=a[i];}
    }
    cout<<t/ct;
    return 0;
}
