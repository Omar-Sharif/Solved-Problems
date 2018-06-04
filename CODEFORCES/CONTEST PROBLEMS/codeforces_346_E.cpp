#include<bits/stdc++.h>
using namespace std;

#define max 100010

vector<int>edges[max];
map<int,bool>vis1[max];
bool vis[max];

int bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    int flag=0;
    int count=0;

    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<edges[u].size();i++){
            int v=edges[u][i];
            //cout<<u<<' '<<v<<endl;
            if(vis[v]==0)count++;
            if(vis1[u][v]==0){
                vis1[u][v]=1;
                vis1[v][u]=1;
                if(vis[v]==1)flag=1;
                else q.push(v);
                vis[v]=1;
            }
        }
    }
    if(flag==1)count++;
    // cout<<src <<' '<<flag<<' '<<count<<endl;
    return count;
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a,b;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            edges[a].push_back(b);
            edges[b].push_back(a);
        }

        long long coun=0;

        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                coun+=bfs(i);
            }
        }
        cout<<n-coun<<endl;
    }
}
