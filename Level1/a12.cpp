#include<iostream>
using namespace std;
int main()
{
    int f=0;
    string s,t="Cannot Determine";
    while(cin>>s){
        if(f==0){
            if(s=="mr.") {t="Male";break;}
            else if(s=="miss") {t="Female";break;}
            else if(s=="mrs") {t="Married Female";break;}
        }
        if(s=="Kumari"){
            if(cin.get()==(int)'\n') {t="Female";break;}
        }
        f++;
        if(cin.get()==(int)'\n')break;
    }
    cout<<"Gender : "<<t;
    return 0;
}
