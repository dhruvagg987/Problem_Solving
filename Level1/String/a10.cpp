#include<iostream>
using namespace std;
int main(){
    int i,j;
    string s;
    getline(cin,s);
    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]==' ') break;
    }
    j=i+1;
    for(i=0;i<j;i++)
    {
        if(s[i+1]==' ')
            cout<<s[i]<<" ";
    }
    for(i=j;i<s.length();i++) cout<<s[i];
    return 0;
}
