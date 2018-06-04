#include<bits/stdc++.h>
using namespace std;

#define mx 10010
bool vis[mx];
vector<int>edges[mx];

int bfs(int src)
{
    queue<int>q;
    q.push(src);

    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<edges[u].size();i++){
            int v=edges[u][i];
            if(vis[v]==0 and v!=src){
                vis[v]=1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);

    for(int c=1;c<=t;c++){
        int n,m,u,v;
        scanf("%d %d",&n,&m);

        for(int i=0;i<m;i++){
            scanf("%d %d",&u,&v);
            edges[u].push_back(v);
        }

        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++){
            if(vis[i]==1)continue;
            bfs(i);
        }
        cout<<count<<endl<<endl;
        int count=0;
        for(int i=1;i<=n;i++){
            cout<<i<<' '<<vis[i]<<endl;
            if(vis[i]==0)count++;
        }

        printf("Case %d: %d\n",c,count);

        for(int i=0;i<mx;i++)edges[i].clear();
    }
}
