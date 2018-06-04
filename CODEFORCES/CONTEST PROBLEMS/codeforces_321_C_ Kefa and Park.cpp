#include<bits/stdc++.h>
using namespace std;

#define mm 100010
vector<int>edges[mm];
int value[mm];
bool vis1[mm];
int n,m,coun;

int dfs(int src,int c,int flag)
{
    vis1[src]=1;
    if(edges[src].size()==1){
        coun++;
        return 0;
    }

    for(int i=0;i<edges[src].size();i++){
        int v=edges[src][i];
        int z=value[v];
       // cout<<v<<endl;
        if(vis1[v]==1)continue;
      // cout<<v<<endl;
        if(z==0)dfs(v,0,0);
        else{
            if(flag==1){
                if(c+1>m)continue;
                dfs(v,c+1,1);
            }
            else{
                dfs(v,1,1);
            }
        }
    }
    return 0;
}
int main()
{
    while(cin>>n>>m)
    {
        int x,y,z=0,flag=0;
        for(int i=1;i<=n;i++)cin>>value[i];
        for(int i=1;i<n;i++){
            cin>>x>>y;
            edges[y].push_back(x);
            edges[x].push_back(y);
        }

        if(value[1]==1){
            z=1;flag=1;
        }
        memset(vis1,0,sizeof(vis1));
        vis1[1]=1;
        for(int i=0;i<edges[1].size();i++){
            int u=edges[1][i];
           // cout<<u<<endl;
            if(vis1[u]==1)continue;
            if(value[u]==1){
                if(flag==1){
                    if(z+1>m)continue;
                    else dfs(u,z+1,1);
                }
                else dfs(u,1,1);
            }
            else{
                dfs(u,0,0);
            }
        }
        cout<<coun<<endl;
    }
}


