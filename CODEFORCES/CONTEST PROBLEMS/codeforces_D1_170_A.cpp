#include<bits/stdc++.h>
using namespace std;

#define mm 1010
vector<int>edges[mm],tree[mm];
int vis[mm],n,m;

int dfs(int src)
{
    vis[src]=1;
   // cout<<src<<' ';
    for(int i=0;i<edges[src].size();i++){
        int u=edges[src][i];
        if(vis[u]==1)continue;
        dfs(u);
    }
    return 0;
}
int main()
{
    while(cin>>n>>m)
    {
        int x,y;
        for(int i=1;i<=n;i++){
            cin>>x;
            for(int j=0;j<x;j++){
               cin>>y;
               tree[y].push_back(i);
            }
        }

        int flag=0;
        for(int i=1;i<=m;i++){
             // cout<<i<<endl;
            for(int j=0;j<tree[i].size();j++){
                    flag=1;
                for(int k=j+1;k<tree[i].size();k++){
                    x=tree[i][j];
                    y=tree[i][k];
                    //cout<<x<<' '<<y<<endl;
                    edges[x].push_back(y);
                    edges[y].push_back(x);
                }
            }
        }
        memset(vis,0,sizeof(vis));

        int count=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==1)continue;
            count++;
            dfs(i);
           // cout<<endl;
        }
        if(flag==0)cout<<n<<endl;
        else cout<<count-1<<endl;
    }
}
