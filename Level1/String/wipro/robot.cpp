#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char face[4]= {'N','E','S','W'};
    int maxx,maxy,posf=0,posx,posy,flag=0;
    string curr;
    char cmd;
    cin>>curr>>curr>>maxx>>curr>>curr>>maxy>>curr;
    posx=curr[0]-'0';
    posy=curr[2]-'0';
    posf=int(strchr(face,curr[4])-&face[0]);
    while(cin>>cmd)
    {
        if(cmd=='L'){
            if(posf==0) posf=3;
            else posf--;
        }
        else if(cmd=='R'){
            posf++;
            posf%=4;
        }
        else if(cmd=='M'){
            if(posf==0){
                if(posy==maxy){flag=1;break;}
                else posy++;
            }
            else if(posf==2){
                if(posy==0){flag=1;break;}
                else posy--;
            }
            else if(posf==1){
                if(posx==maxx){flag=1;break;}
                else posx++;
            }
            else if(posf==3){
                if(posx==0){flag=1;break;}
                else posx--;
            }
        }
        if(cin.get()=='\n') break;
    }
    cout<<posx<<"-"<<posy<<"-"<<face[posf];
    if(flag==1) cout<<"-ER";
    return 0;
}
