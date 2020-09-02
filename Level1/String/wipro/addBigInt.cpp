#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int i,j,c=0,temp;
    for(i=a.length()-1,j=b.length()-1;i>=0 && j>=0;i--,j--)
    {
        temp=a[i]-'0'+b[j]-'0'+c;
//        cout<<temp+'0'<<endl;
        a[i]=temp%10 + '0';
        c=temp/10;
    }
    while(i>0)
    {
        temp=a[i]-'0'+c;
        a[i]=temp%10 + '0';
        c=temp/10;
        i--;
    }
    while(j>0){
        temp=b[j]-'0'+c;
        a[i]=temp%10 + '0';
        c=temp/10;
        j--;
    }
    if(c!=0) cout<<c;
    cout<<a;
    return 0;
}
