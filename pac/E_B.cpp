#include<iostream>
using namespace std;
void power(int n)
{
    long int res=1;
    long int x=2;
    while(n>0)
    {
        if(n&1)
            res=(res*x)%(1000000007);
        n=n>>1;
        x=(x*x)%1000000007;
    }
    cout<<res;
}
int main()
{
    int n;
    cin>>n;
    power(n);
    return 0;
}