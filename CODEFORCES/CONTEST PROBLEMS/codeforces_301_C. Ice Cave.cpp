#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

char ara[510][510];
int vis[510][510],n,m,sx,sy,fx,fy,c;

int dfs(int x,int y)
{
    vis[x][y]=1;
   // cout<<x<<' '<<y<<' '<<ara[x][y]<<endl;
    if(ara[x][y]=='F'){
        c++;
        vis[x][y]=0;
    }

    for(int k=0;k<4;k++){
        int xx=x+dx[k];
        int yy=y+dy[k];

       // cout<<xx<<' '<<yy<<endl;
        if(xx<1 or xx>n or yy<1 or yy>m)continue;
        if(vis[xx][yy]==1)continue;
        if(ara[xx][yy]=='X')continue;
        dfs(xx,yy);
    }
    return 0;
}
int main()
{
    while(cin>>n>>m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                cin>>ara[i][j];
        }
        c=0;
        cin>>sx>>sy>>fx>>fy;
        if(ara[fx][fy]=='X')c=1;
        ara[fx][fy]='F';

        memset(vis,0,sizeof(vis));
        dfs(sx,sy);
       // cout<<c<<endl;
        if(sx==fx and sy==fy){
            if(c>2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(c<2)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}

