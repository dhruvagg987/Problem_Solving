#include<iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
//    cin>>st;
    int i=0,s=0,e=0,b=0;
    while(i<st.length())
    {
        if(b==0 && st[i]==' ') {s++;}
        else{
            b=1;
            if(st[i]!=' ')e=i;
        }
        i++;
    }
    cout<<s<<" "<<e;
    st=st.substr(s,e-s+1);
    cout<<"\nnice:"<<st<<":";
    return 0;
}
