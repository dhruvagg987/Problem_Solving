#include<iostream>
using namespace std;
int main()
{
    static int a[]={0,1,2,3,4};
    static int *p[]={a,a+1,a+2,a+3,a+4};
    int **ptr=p;
    cout<<ptr<<endl;
    **ptr++;
    cout<<ptr<<endl;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    *++*ptr;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    ++**ptr;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    ++*ptr;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    return 0;
}
/*Output:
0x4b8000
0x4b8004
1 1 1
1 2 2
1 2 3
1 3 3
*/
