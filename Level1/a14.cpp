#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> s;
    string t;
    int i;
    while(cin>>t)
    {
        if(t=="independence") t="republic";
        s.push_back(t);
        if(cin.get()==(int)'\n') break;
    }
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=="15" && s[i+1]=="august")
        {
            s[i]="26";
            s[i+1]="january";
        }
    }
    for(i=0;i<s.size()-1;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<s[i];
    return 0;
}
