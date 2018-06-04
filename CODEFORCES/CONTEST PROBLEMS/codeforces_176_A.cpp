#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,1};
int dy[]={0,1,0,1};

string ara[10];

int main()
{
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            cin>>ara[i][j];
    }

    int flag=0,c=0,c1=0,x,y,z;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                x=i+dx[k];
                y=j+dy[k];
                if(ara[x][y]=='#')c++;
                else c1++;
            }
            if(c<=1 or c1<=1){
                flag=1;
            }
            c=0;c1=0;
        }
    }

    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
