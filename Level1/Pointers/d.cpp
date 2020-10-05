#include<iostream>
using namespace std;
int main()
{
    char* name[]={"amar","amarsingh","atulpratapsingh"};
    cout<<*(name+1)<<endl;
    cout<<*(name+2)<<endl;
    cout<<*(name)<<endl;
    cout<<*(*(name+2)+7)<<endl;
    cout<<*name+1<<endl;
    cout<<*name+3<<endl;
    cout<<*(name+2)+3<<endl;
    cout<<*(name+1)+4<<endl;
    return 0;
}
/*Output:
amarsingh
atulpratapsingh
amar
t
mar
r
lpratapsingh
singh
*/
