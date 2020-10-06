#include<iostream>
using namespace std;
int main()
{
    char s[25]="KIET Groups";
    char ch;
    int i=0;
    ch=s[++i];
    cout<<ch<<" "<<i<<endl;
    ch=s[i++];
    cout<<ch<<" "<<i<<endl;
    ch=i++[s];
    cout<<ch<<" "<<i<<endl;
    //cout<<++i[s]<<" "<<s;
    ch=++i[s];
    cout<<ch<<" "<<i;
    return 0;
}
/*
Output:
I 1
I 2
E 3
U 3
*/
