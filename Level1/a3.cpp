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
        if(isupper(s[i])) ct++;
    }
    cout<<ct;
    return 0;
}
