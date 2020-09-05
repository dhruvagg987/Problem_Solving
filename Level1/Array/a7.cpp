#include<iostream>
using namespace std;
int main()
{
    int i,n,a[5],k=0;
    for(i=0;i<5;i++) cin>>a[i];
    cin>>n;
    i=0;
    while(i<5)
    {
        if(a[i]==n)
        k++;
        i++;
    }
    cout<<n<<" found "<<k<<" times.";
    return 0;
}
