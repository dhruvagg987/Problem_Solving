#include<iostream>
using namespace std;
string func(string w, string p){
    if(w.length()!=p.length()) return "0";
    for(int i=0;i<w.length();i++)
    {
        p[i]=toupper(p[i]);
        if(toupper(w[i])!=p[i] && w[i]!='_') return "0";
    }
    return p;
}
int main()
{
    int i,s=0;
    string w,p,temp,t;
    cin>>w>>p;
    for(i=0;i<p.size();i++)
    {
        if(p[i]==':'){
            temp=func(w,p.substr(s,i-s));
            if(temp!="0") t+=temp+':';
            s=i+1;
        }
    }
    temp=func(w,p.substr(s,i-s));
    if(temp!="0")
    t+=temp+':';
    if(t.length()==0){cout<<"ERROR-009";return 0;}
    t.erase(t.size()-1);
    cout<<t;
    return 0;
}
