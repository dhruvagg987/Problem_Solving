#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
