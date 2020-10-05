#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50,60};
    int *p[]={a,a+1,a+2,a+3,a+4,a+5};
    int **pp=p;
    pp++;
    cout<<pp-p<<" "<<*pp-a<<" "<<**pp<<endl;
    *pp++;
    cout<<pp-p<<" "<<*pp-a<<" "<<**pp<<endl;
    ++*pp;
    cout<<pp-p<<" "<<*pp-a<<" "<<**pp<<endl;
    ++**pp;
    cout<<pp-p<<" "<<*pp-a<<" "<<**pp<<endl;
    return 0;
}
/*
Output:
1 1 20
2 2 30
2 3 40
2 3 41
*/
