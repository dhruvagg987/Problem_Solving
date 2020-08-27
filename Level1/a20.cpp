#include<iostream>
using namespace std;
int main()
{
    string t;
    while(cin>>t)
    {
        if(t.length()>5) cout<<t<<" ";
        if(cin.get()=='\n') break;
    }
    return 0;
}
