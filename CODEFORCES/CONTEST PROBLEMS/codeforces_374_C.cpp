#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,long long>
#define lli long long
#define mx 5010
lli dp[mx];
int vis[mx];
vector<pii>edges[mx];
lli t,x;
int n,m;

int dfs(int x,lli sum,int c)
{
    if(dp[x]!=-1)return dp[x];
    int u,v;
    lii s;
    vis[x]=1;

    for(int i=0;i<edges[x].size();i++){
        u=edges[x][i].first;
        s=edges[x][i].second;
        if(sum+s>t or vis[u]==1)continue;

    }
}
int main()
{
    int u,v;
    while(cin>>n>>m>>t){
        for(int i=1;i<=m;i++){
            cin>>u>>v>>x;
            edges[u].push_back(pii(v,x));
            edges[v].push_back(pii(u,x));
        }
    }
}

