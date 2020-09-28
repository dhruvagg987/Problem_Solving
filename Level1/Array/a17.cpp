#include<iostream>
using namespace std;
int main()
{
    int n,i,j,l,f=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>l;
        if(l%2==0)
        {
            if(f==0)
            {
                a[0]=l;
                f=1;
                continue;
            }
            j=f;
            while(a[j-1]>l && j>0)
            {
                a[j]=a[j-1];
                j--;
            }
            a[j]=l;
            f++;
        }
    }
    for(i=0;i<f;i++)
        cout<<a[i]<<" ";
    return 0;
}
