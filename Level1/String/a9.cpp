#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j;
    string s;
    cin>>s;
    for(i=0,j=s.length()-1;i<s.length()/2;i++,j--)
    {
        if(s[i]!=s[j]) break;
    }
    if(i==s.length()/2) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    return 0;
}
