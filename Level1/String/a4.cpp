#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string s;
    int ct=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        s[i] = toupper(s[i]);
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') ct++;
    }
    cout<<ct;
    return 0;
}
