#include<bits/stdc++.h>
using namespace std;

#define mx 20010
map<string, int>my;
vector<int>edges[mx];
bool vis[mx];

int bfs(int src)
{
    memset(vis,0,sizeof(vis));
    queue<int>q;
    q.push(src);
    vis[src]=1;
    int c=0;

    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<edges[u].size();i++){
            int v=edges[u][i];
           // cout<<u<<' '<<v<<endl;
            if(v==src){
                c=1;
                break;
            }
            if(vis[v]==1)continue;
            vis[v]=1;
            q.push(v);
        }
        if(c==1)break;
    }
   // cout<<c<<endl;
    return c;
}
int main()
{
    int t,n;
    scanf("%d",&t);

    for(int j=1;j<=t;j++){
        scanf("%d",&n);
        string u,v;
        int a,b,c=1;
        for(int i=0;i<n;i++){
            cin>>u>>v;
            if(my[u]==0)my[u]=c++;
            if(my[v]==0)my[v]=c++;
            a=my[u];b=my[v];
            edges[a].push_back(b);
        }

        int flag=0;
        for(int i=1;i<c;i++){
            //if(vis[i]==1)continue;
            if(bfs(i)==1){
                flag=1;
                break;
            }
        }
        if(flag==0)printf("Case %d: Yes\n",j);
        else printf("Case %d: No\n",j);
        my.clear();
        for(int i=0;i<mx;i++)edges[i].clear();
    }
}
