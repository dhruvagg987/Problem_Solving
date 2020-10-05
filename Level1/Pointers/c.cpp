#include<iostream>
using namespace std;
int main()
{
    static int a[]={10,20,30,40,50,60};
    static int *p[]={a,a+1,a+2,a+3,a+4,a+5};
    int **ptr=p;
    ptr++;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    *ptr++;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    ++*ptr;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    ++**ptr;
    cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
    return 0;
}
/*Output:
1 1 20
2 2 30
2 3 40
2 3 41
*/
