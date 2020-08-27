#include<iostream>
using namespace std;
int main()
{
    string s = "iLoVeJava";
    int i,j,k=s.length()-1,n;
    for(i=0;i<s.length();i++)
    {
        for(j=0;j<s.length();j++)
        {
            if(j<k) cout<<" ";
            else cout<<s[j-k];
        }
        j=j-k-2;
        while(j>=0){
            cout<<s[j];
            j--;
        }
        k--;
        cout<<endl;
    }
    return 0;
}
