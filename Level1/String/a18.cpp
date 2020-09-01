#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,ar[26]={0};
    for(i=0;i<s.length();i++)
    {
        ar[s[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(ar[i]>0) cout<<char(i+97)<<"   "<<ar[i]<<endl;
    }
    return 0;
}
