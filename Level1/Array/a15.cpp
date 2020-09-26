#include<iostream>
#include<math.h>
using namespace std;
int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int i;
    int a[]={1,2,3,4,5,6,7,8,9,0};
    for(i=0;i<sizeof(a)/sizeof(int);i++)
    {
        if(prime(a[i])) cout<<a[i]<<" ";
    }
    return 0;
}
