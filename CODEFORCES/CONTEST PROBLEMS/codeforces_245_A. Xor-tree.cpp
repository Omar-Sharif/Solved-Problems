#include<bits/stdc++.h>
using namespace std;
#define mm 100010

vector<int>edges[mm],my;
int value[mm],finalv[mm],vis[mm];

int dfs(int src,int f1,int f2,int c)
{
    int flag=0;
    vis[src]=1;
    if(c%2!=0){
        if(f2%2==1)value[src]^=1;
        if(value[src]!=finalv[src]){
            f2++;
            my.push_back(src);
        }
    }
    else{
        if(f1%2==1)value[src]^=1;
         if(value[src]!=finalv[src]){
            f1++;
            my.push_back(src);
        }
    }

    for(int i=0;i<edges[src].size();i++){
        int u=edges[src][i];
        if(vis[u]==1)continue;
            dfs(u,f1,f2,c+1);
    }
}

int main()
{
    int n,x,y;
    while(cin>>n)
    {
        for(int i=1;i<n;i++){
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }

        for(int i=1;i<=n;i++)cin>>value[i];
        for(int i=1;i<=n;i++)cin>>finalv[i];

        memset(vis,0,sizeof(vis));
        dfs(1,0,0,1);

        cout<<my.size()<<endl;
        for(int i=0;i<my.size();i++)
            cout<<my[i]<<endl;
    }
}
