#include<iostream>
using namespace std;
void binS(int a[],int s, int l,int x)
{
    if(l>=s){
    int mid=(s+l)/2;
    if(a[mid]==x) cout<<"Found at "<<mid+1;
    else if(a[mid]>x) binS(a,s,mid-1,x);
    else binS(a,mid+1,l,x);
    }
    else cout<<"Not Found";
}
int main()
{
    int n;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>i;
    binS(a,0,n-1,i);
    return 0;
}
