#include<iostream>
using namespace std;
int main()
{
    static char *s[]={"ice","green","cone","please"};
    static char **ptr[]={s+3,s+2,s+1,s};
    char ***p=ptr;
    cout<<(**++p)<<endl;
    cout<<*--*++p+2<<endl;
    cout<<*p[-2]+3;
    return 0;
}
/*Output:
cone
e
ase
*/
