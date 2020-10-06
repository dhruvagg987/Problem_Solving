#include<iostream>
using namespace std;
int main()
{
    char s[]="KIET Group of Institutions";
    cout<<(*(&s[2]))<<endl;
    cout<<s+5<<endl;
    cout<<s<<endl;
    cout<<*(s+2)<<endl;
    cout<<s<<endl;
    return 0;
}
/*
Output:
E
Group of Institutions
KIET Group of Institutions
E
KIET Group of Institutions
*/
