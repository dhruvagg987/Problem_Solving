#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k,mn,a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        mn=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mn]) mn=j;
        }
        if(i!=mn){
            a[mn]=a[i]+a[mn];
            a[i]=a[mn]-a[i];
            a[mn]=a[mn]-a[i];
        }
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
