#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    char c;
    int i,j;
    cin>>s;

    for(i=0;i<s.length();i++)
    {
        c=tolower(s[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            break;
    }
    if(i!=s.length())
        cout<<s.substr(i)<<s.substr(0,i)<<"ay";
    else cout<<s<<"ay";
    return 0;
}
