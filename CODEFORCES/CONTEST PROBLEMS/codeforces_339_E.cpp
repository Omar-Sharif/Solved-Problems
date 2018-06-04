#include<bits/stdc++.h>
using namespace std;
vector<int>v[100010];
bool vis[100010];
bool vis1[100010];
long long n,m;
long long coun=0;
int bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=1;
    int count=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++){
            int a=v[u][i];
           // cout<<u<<' '<<a<<endl;
        if(vis[a]==0){
                count++;
                vis[a]=1;
                q.push(a);
            }
        }
    }
    cout<<count<<endl;
    return count;
}
int main()
{
    while(cin>>n>>m)
    {
        int a,b;
        for(int i=1;i<=m;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                coun+=bfs(i);
            }

        }
        cout<<n-coun<<endl;

    }
}

