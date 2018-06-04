#include<bits/stdc++.h>
using namespace std;

#define lli long long
map<lli,int>my;
vector<int>edges[100];

int bfs(int src,int c)
{
    queue<int>q;
    q.push(src);
    int vis[100],level[100];
    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
    vis[src]=1,level[src]=0;

    int count=1;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<edges[u].size() and level[u]<c;i++){
            int v=edges[u][i];
             //if(u==1){
              //  cout<<v<<endl;
              //  cout<<vis[v]<<endl;
            // }
            if(vis[v]==1)continue;
            q.push(v);
            vis[v]=1;
            level[v]=level[u]+1;
            count++;
        }
    }
    //cout<<count<<endl;
   return count;
}

int main()
{
    int n,cas=1;
   //freopen("out.txt","w",stdout);
    while(cin>>n){
        if(n==0)break;
        lli u,v;
        int c=1,q,a,b,x,y,z;

        for(int i=0;i<n;i++){
            cin>>u>>v;
            if(my[u]==0) my[u]=c++;
            if(my[v]==0) my[v]=c++;
            a=my[u];b=my[v];
            edges[a].push_back(b);
            edges[b].push_back(a);
        }
        //cout<<c<<endl;
        c--;
        while(cin>>a>>b){
            if(a==0 and b==0)break;
            x=my[a];
            y=c-bfs(x,b);
            if(x==0)y=c;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cas++,y,a,b);
        }
        for(int i=0;i<100;i++)edges[i].clear();
        my.clear();
    }
}
