#include<iostream>
using namespace std;
int main()
{
    int i=0;
    string s;
    while(cin>>s && cin.get()!=(int)'\n'){
            i++;
    }
    cout<<i+1;
    return 0;
}
