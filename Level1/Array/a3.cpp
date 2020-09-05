#include<iostream>
using namespace std;
int main()
{
    int i,a[12],f=0;
    for(i=0;i<12;i++)
    {
        if(i==1){a[i]=28;f=0;}
        else if(f==0){
            a[i]=31;
            if(i!=6)
                f=1;
        }
        else if(f==1)
        {
            a[i]=30;
            f=0;
        }
//        cout<<a[i]<<endl;
    }
    cin>>f;
    cout<<a[f-1];
    return 0;
}
