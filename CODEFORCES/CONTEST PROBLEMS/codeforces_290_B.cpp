#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

int vis[60][60];
char ara[5000][5000];
int mark[60][60];
int vis1[60][60];

int r,c,f,v1,v2;

void dfs(int x,int y,char ch)
{
   // cout<<"my "<<x<<' '<<y<<' '<<r<<' '<<c<<' '<<ch<<endl;
    for(int i=0;i<4;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if((xx<0 or xx>=r) or (yy<0 or yy>=c))continue;
        if(ara[xx][yy]!=ch)continue;
        if(vis1[xx][yy]==1)continue;
        int  u=mark[x][y];int v=mark[xx][yy];
        if(vis[u][v]==1)continue;
        vis[u][v]=1;
        vis[v][u]=1;

        if(xx==v1 and yy==v2){
           f=1;
        }
        vis1[xx][yy]=1;
        dfs(xx,yy,ch);
    }
}

int main()
{
    while(cin>>r>>c)
    {
        int q=1;
        f=0;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>ara[i][j];
                mark[i][j]=q;
                q++;
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                memset(vis,0,sizeof(vis));
                memset(vis1,0,sizeof(vis1));
                v1=i;v2=j;
                dfs(i,j,ara[i][j]);
                if(f==1)break;

            }
            if(f==1)break;
        }

        if(f==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
