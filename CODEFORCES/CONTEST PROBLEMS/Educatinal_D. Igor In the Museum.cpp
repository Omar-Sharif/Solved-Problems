#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

#define pii pair<int,int>
queue<pii>q;
char ara[1010][1010];
int vis[1010][1010],dp[1010][1010];
int n,m,k,coun;

int check(int x,int y)
{
    for(int k=0;k<4;k++){
        int xx=x+dx[k];
        int yy=y+dy[k];
        if(ara[xx][yy]=='*')coun++;
    }
}
int dfs(int x,int y)
{
    vis[x][y]=1;
    q.push(pii(x,y));
    check(x,y);

    for(int k=0;k<4;k++){
        int xx=x+dx[k];
        int yy=y+dy[k];
        if(ara[xx][yy]=='*')continue;
        if(vis[xx][yy]==1)continue;
        dfs(xx,yy);
    }
}
int to_empty()
{
    pii a;
    //cout<<coun<<endl;
    while(!q.empty()){
        a=q.front();q.pop();
        int x=a.first;
        int y=a.second;
        //cout<<x<<' '<<y<<endl;
        dp[x][y]=coun;
    }
}
int main()
{
    while(cin>>n>>m>>k)
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                cin>>ara[i][j];
        }

        memset(vis,0,sizeof(vis));
        memset(dp,0,sizeof(dp));
        int x,y,z;

        for(int i=0;i<k;i++){
          scanf("%d%d",&x,&y);
            coun=0;
           // cout<<dp[x][y]<<endl;
            if(dp[x][y]!=0)printf("%d\n",dp[x][y]);
            else{
                dfs(x,y);
                to_empty();
                printf("%d\n",dp[x][y]);
            }
        }
    }
}
