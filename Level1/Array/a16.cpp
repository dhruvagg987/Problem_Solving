#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>n;
    map <int,int> mp;
    map <int,int> :: iterator itr;
    for(i=0;i<n;i++)
    {
        cin>>t;
        mp[t]++;
    }
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second == 1) cout<<itr->first;
    }
    return 0;
}
