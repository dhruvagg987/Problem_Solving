#include<iostream>
using namespace std;
int main()
{
    int n,i,px,mx,pn,mn;
    cin>>n;
    int a[n];
    mx=px=INT_MIN;
    mn=pn=INT_MAX;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx){
            px=mx;
            mx=a[i];
        }
        else if(a[i]>px && mx!=a[i])
        {
            px=a[i];
        }
        if(a[i]<mn){
            pn=mn;
            mn=a[i];
        }
        else if(a[i]<pn && mn!=a[i])
        {
            pn=a[i];
        }
    }
    cout<<"second largest: ";
    if(px==INT_MIN)
        cout<<"-";
    else cout<<px;
    cout<<"\nsecond minimum: ";
    if(pn==INT_MAX)
        cout<<"-";
    else cout<<pn;
    return 0;
}
