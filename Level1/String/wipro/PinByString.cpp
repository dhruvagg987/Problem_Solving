#include<iostream>
using namespace std;
int main()
{
    int sum=0,t=0;
    string s;
    while(cin>>s)
    {
        sum+=s.length();
        if(cin.get()==int('\n')) break;
    }
    while(sum>9)
    {
        t=0;
        while(sum>0){
            t+=sum%10;
            sum/=10;
        }
//        cout<<t<<endl;
        sum=t;
    }
    cout<<sum;
    return 0;
}
