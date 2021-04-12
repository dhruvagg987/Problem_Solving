#include<iostream>
#include<string>
#include<vector>
using namespace std;
static int ct=0;
vector <string> v;
void func(string s,int l,int n)
{
    int i;
    char t;
    if(l==n-1)
    {
        //cout<<s<<endl;
        v.push_back(s);
        ct++;
    }
    else{
        int ar[26]={0};
        for(i=l;i<n;i++)
        {
            if(i!=l && s[i]==s[l])
                continue;
            else
            {
                if(ar[s[i]-'a']!=0)
                {
                    //cout<<"saved"<<endl;
                    continue;
                }
                else
                {
                    ar[s[i]-'a']=1;
                    //cout<<"....."<<ar[s[i]-'a'];
                }
                //swap
                t=s[l];
                s[l]=s[i];
                s[i]=t;

                func(s,l+1,n);

                //swap
                t=s[l];
                s[l]=s[i];
                s[i]=t;
            }
        }
    }
}
int main()
{
    int n,i;
    string s;
    cin>>s;
    func(s,0,s.length());
    cout<<ct<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
