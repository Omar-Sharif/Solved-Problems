#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
vector<int>edges[mx];
int n,m;
int vis[mx],ara[mx];

int check(int x)
{
    vis[x]=1;
    queue<int>q;
    q.push(x);
    int mn=ara[x];
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<edges[u].size();i++){
            int uu=edges[u][i];
            if(vis[uu]==1)continue;
            vis[uu]=1;
            mn=min(mn,ara[uu]);
            q.push(uu);
        }
    }
    return mn;
}
int main()
{
    cin>>n>>m;
    int u,v;
    for(int i=1;i<=n;i++)scanf("%d",&ara[i]);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&u,&v);
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    lli sum=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==1)continue;
        sum+=check(i);
    }
    cout<<sum<<endl;
}
