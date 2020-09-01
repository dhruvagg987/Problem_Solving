#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string word;
    int i,j,sum;
    while(cin>>word)
    {
        sum =0;
        for(i=0,j=word.length()-1;i<word.length();i++,j--)
        {
            if(i>j) break;
            if(i<j)
            sum+=abs(int(tolower(word[i]))-int(tolower(word[j])));
            else sum+=int(tolower(word[i]))-'a'+1;
        }
        cout<<sum;
        if(cin.get()=='\n') break;
    }
    return 0;
}
