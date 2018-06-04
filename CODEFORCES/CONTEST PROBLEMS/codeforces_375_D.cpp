#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

vector<pii>vec;
string ara[55];
int n,m,k,vis[55][55],coun[55][55];
int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

int bfs(int x,int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    vis[x][y]=1;
    int flag=0,count=1,u,v,xx,yy;
    if(x==0 or x==n-1 or y==0 or y==m-1)flag=1;

    while(!q.empty()){
        pii my=q.front();q.pop();
        u=my.first;
        v=my.second;

        for(int a=0;a<4;a++){
            xx=dx[a]+u;
            yy=dy[a]+v;
            if(xx<0 or xx>=n or yy<0 or yy>=m)continue;
            if(vis[xx][yy]==1 or ara[xx][yy]=='*')continue;
            if(xx==0 or xx==n-1 or yy==0 or yy==m-1)flag=1;
            vis[xx][yy]=1;
            q.push(pii(xx,yy));
            count++;
        }
    }
    if(flag==1)return 100000;
    else return count;
}
int dfs(int x,int y)
{
    ara[x][y]='*';

    for(int a=0;a<4;a++){
        int xx=x+dx[a];
        int yy=y+dy[a];

        if(xx<0 or xx>=n or yy<0 or yy>=m)continue;
        if(ara[xx][yy]=='*')continue;
        dfs(xx,yy);
    }
    return 0;
}

int main()
{
    while(cin>>n>>m>>k){
        for(int i=0;i<n;i++)
            cin>>ara[i];
        memset(vis,0,sizeof(vis));
        int d=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ara[i][j]=='.' and vis[i][j]==0){
                    int c=bfs(i,j);
                    if(c!=100000){
                        d++;
                        coun[i][j]=c;
                        vec.push_back(pii(i,j));
                    }
                }
            }
        }

        int chk[55][55],xx,yy,a,b,mx,co=0;
        memset(chk,0,sizeof(chk));

        while(d>k){
                mx=10000,a,b;
            for(int i=0;i<vec.size();i++){
                xx=vec[i].first;
                yy=vec[i].second;
                if(coun[xx][yy]<mx and chk[xx][yy]==0){
                    mx=coun[xx][yy];
                    a=xx;b=yy;
                }
            }
            co+=coun[a][b];
            chk[a][b]=1;
            dfs(a,b);
            d--;
        }

        cout<<co<<endl;
        for(int i=0;i<n;i++)
            cout<<ara[i]<<endl;

    }
}
