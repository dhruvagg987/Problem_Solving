#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[5];
    while(cin.getline(ch,5))
    {
        cout<<ch[0]<<endl;
        if(ch=="\n") break;
    }
    cout<<"end";
    return 0;
}
