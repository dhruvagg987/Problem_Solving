#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s[7]={"Monday","Tuesday","Wednesday","Thurday","Friday","Saturday","Sunday"};
    string s2;
    cin>>s2;
    int i;
    for(i=0;i<7;i++)
    {
        if(s[i]==s2)
            break;
    }
    if(i<7) cout<<i+1;
    else cout<<"enter a valid day";
    return 0;
}
