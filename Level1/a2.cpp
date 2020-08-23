#include<iostream>
using namespace std;
int main()
{
    int i,f=0;
    string s;
    getline(cin,s);
    cout<<s[0];
    for(i=1;i<s.length();i++)
    {
        if(f==1)
            cout<<"."<<s[i];
        if(s[i]==' ') f=1;
        else f=0;
    }
    return 0;
}

 //   ALTER
 //   """"""

#include<iostream>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    cout<<s[0];
    while(cin>>s && cin.get()!=(int)'\n')
    {
        cout<<"."<<s[0];
    }
    cout<<"."<<s[0];
    return 0;
}
