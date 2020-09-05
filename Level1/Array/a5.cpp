#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,k=0;
    cin>>n>>m;
    int a[n],b[m],c[m+n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<m;i++) cin>>b[i];
    i=0;j=0;
    while(i<n && j<m)
    {
        if(a[i]>b[j]){c[k]=b[j];j++;}
        else{c[k]=a[i];i++;}
        k++;
    }
    while(i<n){c[k]=a[i];i++;k++;}
    while(j<m){c[k]=b[j];j++;k++;}
    for(i=0;i<n+m;i++) cout<<c[i]<<" ";
    return 0;
}
