#include<bits/stdc++.h>
using namespace std;

#define mm 100010
vector<int>edges[mm],v;
int dp[mm],situation[mm],vis[mm],n;

int dfs(int v)
{
    dp[v]=situation[v];
    vis[v]=1;
    for(int i=0;i<edges[v].size();i++){
        int u=edges[v][i];
        if(vis[u]==1)continue;
       // cout<<v<<' '<<u<<endl;
        dfs(u);
        dp[v]+=dp[u];
        //cout<<v<<' '<<dp[v]<<endl;
    }
    return 0;
}
int finalr()
{
  //  cout<<"my"<<endl;
    for(int i=1;i<=n;i++){
      //  cout<<dp[i]<<' '<<situation[i]<<endl;
        if(dp[i]==1 and situation[i]==1)
            v.push_back(i);
    }

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
}
int main()
{
    int x,y,z;
    while(cin>>n)
    {
        memset(vis,0,sizeof(vis));
        memset(situation,0,sizeof(situation));
        memset(dp,0,sizeof(dp));

        for(int i=1;i<n;i++){
            scanf("%d%d%d",&x,&y,&z);
            edges[x].push_back(y);
            edges[y].push_back(x);
            if(z==2){
                situation[x]=1;
                situation[y]=1;
            }
        }
        dfs(1);
        finalr();
    }
}
