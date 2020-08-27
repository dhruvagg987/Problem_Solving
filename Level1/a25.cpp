#include<iostream>
using namespace std;
struct student{
    string name;
    float marks;
};
int main()
{
    int i,j;
    student temp;
    student s[5];
    for(i=0;i<5;i++)
    {
        cin>>s[i].name>>s[i].marks;
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[i].marks<s[j].marks)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<<endl<<"Name"<<'\t'<<"Marks"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<s[i].name<<'\t'<<s[i].marks<<endl;
    }
    return 0;
}
