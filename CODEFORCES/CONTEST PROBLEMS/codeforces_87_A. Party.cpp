#include<bits/stdc++.h>
using namespace std;

vector<int>edgeu[2010];
int n,m,coun=0;
bool vis[2010];

int dfsup(int src)
{
    coun++;
    vis[src]=1;
    for(int i=0;i<edgeu[src].size();i++){
        int u=edgeu[src][i];
       // cout<<u<<endl;
        dfsup(u);
    }
}
int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            cin>>m;
            if(m==-1)continue;
            edgeu[i].push_back(m);
        }
        int count=0;
        memset(vis,0,sizeof(vis));

        for(int i=1;i<=n;i++){
            coun=0;
            if(vis[i]==1)continue;
            dfsup(i);
            count=max(count,coun);
        }
        cout<<count<<endl;
    }
}
