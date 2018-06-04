#include<bits/stdc++.h>
using namespace std;

char ara[110][110];
int n,m,coun[110][110],coun2[110][110];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};

void check(int x,int y)
{
    for(int i=0;i<8;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx>=1 and xx<=n and yy>=1 and yy<=m){
            coun[xx][yy]+=1;
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ara[i][j];
            if(ara[i][j]=='*'){
                check(i,j);
            }
            if(ara[i][j]=='.')ara[i][j]='0';
        }
    }

    int f=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(ara[i][j]=='*')continue;
                int xx=ara[i][j]-'0';
                //cout<<xx<<' '<<coun[i][j]<<endl;
                if(xx!=coun[i][j]){
                    f=0;
                    break;
                }
            }
        if(f==0)break;
    }

    if(f==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
