#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
#define pii pair<lli,lli>

lli n,m,k;
lli ara[mx];
lli vis1[mx];
vector<pii>edges[mx];

lli bfs(lli src)
{
    queue<lli>q;
    q.push(src);
    lli vis[mx],level[mx];
    //memset(vis,0,sizeof(vis));
    vis[src]=1;level[src]=0;
    lli m=1000000000000000;

    while(!q.empty()){
        lli u=q.front();q.pop();
        for(lli i=0;i<edges[u].size();i++){
            pii v=edges[u][i];
            lli a,b;
            a=v.first;
            b=v.second;
          //  cout<<a<<' '<<b<<endl;
            if(vis1[a]==0){
                level[a]=level[u]+b;
              //  vis[a]=1;
                m=min(m,level[a]);
            }
        }
    }
   // cout<<m<<endl;
    return m;
}
int main()
{
    while(cin>>n>>m>>k)
    {
        lli u,v,l,ans=1000000000000000;

        for(lli i=0;i<m;i++){
            cin>>u>>v>>l;
            edges[u].push_back(pii(v,l));
            edges[v].push_back(pii(u,l));
        }

        for(lli i=0;i<k;i++){
            cin>>ara[i];
            vis1[ara[i]]=1;
        }

        for(lli i=0;i<k;i++){
            ans=min(ans,bfs(ara[i]));
        }

        if(ans==1000000000000000)ans=-1;
        cout<<ans<<endl;
    }
}

