#include<iostream>
#include<vector>
using namespace std;
vector<string> func(string i){
    vector<string> r;
    int j=0,n=i.length();
    if(n%3==0){
        while(j<n){
            r.push_back(i.substr(j,n/3));
            j+=n/3;
        }
    }
    else if(n%3==1)
    {
        r.push_back(i.substr(j,n/3));
        j+=n/3;
        r.push_back(i.substr(j,1+n/3));
        j+=(n/3)+1;
        r.push_back(i.substr(j,n/3));
    }
    else{
        r.push_back(i.substr(j,1+n/3));
        j+=(n/3)+1;
        r.push_back(i.substr(j,n/3));
        j+=(n/3);
        r.push_back(i.substr(j,1+n/3));
    }
    return r;
}
int main()
{
    vector<string> r;
    int i=0;
    string i1,o1="",o2="",o3="";
    while(i<3)
    {
        cin>>i1;
        r=func(i1);
        o1+=r[0];
        o2+=r[1];
        o3+=r[2];
        i++;
    }
    for(i=0;i<o3.length();i++)
    {
        if(islower(o3[i])) o3[i]=toupper(o3[i]);
        else o3[i]=tolower(o3[i]);
    }
    cout<<o1<<endl<<o2<<endl<<o3;
    return 0;
}
