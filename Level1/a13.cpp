#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,t=0;
    if(s1==s2) {cout<<"Equal";return 0;}
    for(i=0;i<s1.length() && i<s2.length();i++)
    {
        if(s1[i]<s2[i]) {t=1;break;}
        if(s1[i]>s2[i]) {t=2;break;}
    }
    if(t==0 && i<s1.length()) t=2;
    else if(t==0 && i<s2.length()) t=1;
    if(t==1) cout<<s1<<" comes before "<<s2;
    else if(t==2) cout<<s2<<" comes before "<<s1;
    return 0;
}
