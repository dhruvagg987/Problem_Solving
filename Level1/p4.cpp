#include<iostream>
using namespace std;
int main()
{
    int i,j;
    string s="JAVA";
    for(i=0;i<=s.length();i++)
    {
        for(j=i;j<s.length();j++) cout<<s[j]<<" ";
        j=0;
        while(j<i){
            cout<<char(tolower(s[j]))<<" ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}
