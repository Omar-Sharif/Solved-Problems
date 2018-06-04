#include<bits/stdc++.h>
using namespace std;

#define mx 100010
vector<int>edges[mx],vec;
int vis[mx],dis[mx],n,m,k,s=0,f=0;

int dfs(int x,int p,int c)
{
    int u,v=0;
    vis[x]=1;
    dis[x]=c;
    for(int i=0;i<edges[x].size();i++){
        u=edges[x][i];
        if(u==p)continue;
        if(s!=0 and f!=0)continue;
        if(vis[u]==1){
            if(dis[x]-dis[u]>=k){
                vec.push_back(x);
                f=u;
                s=x;
                return  v=max(v,1);
            }
            else continue;
        }
        else v=max(v,dfs(u,x,c+1));
    }
    if(v==1) vec.push_back(x);
    if(x==f)v=0;
    return v;
}
int main()
{
    while(cin>>n>>m>>k)
    {
        int u,v,a,b,c=0;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        dfs(1,0,1);

        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<' ';
        }
    }
}
