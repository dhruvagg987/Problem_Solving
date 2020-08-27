#include<iostream>
using namespace std;
int main()
{
    int i;
    string s;
    while(cin>>s)
    {
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i+1]==s[i]) break;
        }
        if(i<s.length()-1) cout<<s<<" ";
        if(cin.get()=='\n') break;
    }
}
