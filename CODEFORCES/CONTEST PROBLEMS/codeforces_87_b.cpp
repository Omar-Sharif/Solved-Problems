#include<bits/stdc++.h>
using namespace std;
int dx[]={0,-1,1,0};
int dy[]={1,0,0,-1};
string ara[20];
int n,m,coun=0;

int check(int x,int y)
{
    for(int k=0;k<4;k++){
        int xx=x+dx[k];
        int yy=y+dy[k];
        if(xx<0 or xx>=n or yy<0 or yy>=m)continue;
        if(ara[xx][yy]=='W'){
            coun++;
            ara[x][y]='.';
            ara[xx][yy]='.';
            break;
        }
    }
    return 0;
}
int main()
{
    while(cin>>n>>m){
        for(int i=0;i<n;i++)cin>>ara[i];
        coun=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ara[i][j]=='P')check(i,j);
            }
        }
        cout<<coun<<endl;
    }
}
