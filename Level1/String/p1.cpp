#include<iostream>
using namespace std;
int main()
{
    int i,j;
    string s="JAVA";
    for(i=0;i<s.length();i++)
    {
        for(j=0;j<=i;j++) cout<<s[j];
        cout<<endl;
    }
    return 0;
}
