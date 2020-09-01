#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,f=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(i%2==0) s[i]=tolower(s[i]);
        else s[i]=toupper(s[i]);
        f++;
    }
    cout<<s;
    return 0;
}
