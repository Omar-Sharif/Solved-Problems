#include<bits/stdc++.h>
using namespace std;

vector<int>edges[110];
int vis[110];
int n,m,flag=0,coun=0;

int dfs(int node,int p)
{
    for(int i=0;i<edges[node].size();i++){
        int v=edges[node][i];
        if(v==p)continue;
        if(vis[v]==1){
            flag=1;
            continue;
        }
        vis[v]=1;
        coun++;
        dfs(v,node);
    }
}

int main()
{
    while(cin>>n>>m){
        int u,v;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        memset(vis,0,sizeof vis);

        int count=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==1)continue;
            vis[i]=1;
            coun=1;flag=0;
            dfs(i,0);
           // cout<<flag<<' '<<coun<<endl;
            if(flag==1 and coun%2==1)count++;
        }
        if((n-count)%2==1)count++;
        cout<<count<<endl;

        for(int i=0;i<110;i++)edges[i].clear();
    }
}
