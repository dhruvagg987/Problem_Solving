#include<iostream>
using namespace std;
int main()
{
    int i;
    string data[5][2];
    for(i=0;i<5;i++)
    {
        cin>>data[i][0]>>data[i][1];
    }
    cout<<"Roll.no"<<'\t'<<"Name"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<data[i][0]<<'\t'<<data[i][1]<<endl;
    }
    return 0;
}
