#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
string palin(string s)
{
    unordered_map<char,int> m;
    int i,n=s.length();
    string l="",r="",oc="";
    for(i=0;i<n;i++)
        m[s[i]]++;
    for(auto i: m)
    {
        if(i.second%2==0)
        {
            string f(i.second/2,i.first);
            l+=f;
            f=f+r;
            r=f;
        }
        else if(i.second%2!=0)
        {
            oc+=i.first;
        }
    }
    if(oc.length()>1 || oc.length()&&s.length()%2==0)
    {
        return("NO SOLUTION");
    }
    else{
        return string(l+oc+r);
    }
}
int main(){
    string s;
    cin>>s;
    cout<<palin(s);
    return 0;
}