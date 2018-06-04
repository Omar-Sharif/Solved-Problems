#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

vector<int>edges[mx];
int vis[mx],coun[mx],ans=0;

int dfs(int u)
{
    vis[u]=1;

    for(int i=0;i<edges[u].size();i++){
        int v=edges[u][i];
        if(vis[v]==1)continue;
        coun[u]=coun[u]+dfs(v);
    }
    coun[u]++;
    if(coun[u]%2==0){
            ans++;
        coun[u]=0;
    }
    return coun[u];
}

int main()
{
    int n,u,v;
    cin>>n;
    for(int i=1;i<n;i++){
        scanf("%d %d",&u,&v);
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    if(n%2==1){
        cout<<-1<<endl;
    }
    else{
        dfs(1);
        cout<<ans-1<<endl;
    }
}

