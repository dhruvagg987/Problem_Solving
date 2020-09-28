#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    map <int,int> mp;
    map<int,int> :: iterator x;
    for(i=0;i<10;i++)
    {
        cin>>t;
        mp[t]++;
    }
    for(x=mp.begin();x!=mp.end();x++)
    {
        cout<<x->first<<" -> "<<x->second<<endl;
    }
    return 0;
}
