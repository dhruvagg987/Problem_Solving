#include<iostream>
using namespace std;
int main()
{
    int i,j;
    string s="COMPUTER";
    for(i=0;i<s.length();i++)
    {
        for(j=i;j<s.length();j++) cout<<s[j]<<" ";
        cout<<endl;
    }
    return 0;
}

