#include<bits/stdc++.h>
using namespace std;

#define mx 300010
#define lli long long
vector<int>edges[mx];
lli coun[mx];
int vis[mx];

int dfs(int u)
{
    vis[u]=1;
    for(int i=0;i<edges[u].size();i++){
        int uu=edges[u][i];
        if(vis[uu]==1)continue;
        coun[u]+=dfs(uu);
    }
    coun[u]++;
    return coun[u];
}

int main()
{
    lli n,uu,vv,ans;
    int a,b,x,y;
    cin>>n>>x>>y;
    for(int i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    memset(vis,0,sizeof vis);
    memset(coun,0,sizeof coun);
    dfs(x);
    uu=coun[y];

    memset(vis,0,sizeof(vis));
    memset(coun,0,sizeof coun);
    dfs(y);
    vv=coun[x];
    vv=vv*uu;

    ans=(n*(n-1ll))-vv;
    cout<<ans<<endl;

}

