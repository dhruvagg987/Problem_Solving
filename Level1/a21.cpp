#include<iostream>
using namespace std;
int pal(string s){
    int i,j;
    for(i=0,j=s.length()-1;i<s.length()/2;i++,j--)
    {
        if(s[i]!=s[j]) break;
    }
    if(i==s.length()/2) return 1;
    else return 0;
}
int main()
{
    string s;
    while(cin>>s)
    {
        if(1==pal(s)) cout<<s<<" ";
        if(cin.get()=='\n') break;
    }
}
