#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long
lli ara[110];
bool vis[110];
int n;
vector<int>edges[110];

int dfs(int c,int count)
{
    vis[c]=1;
    if(count==n)return n;
    for(int i=0;i<edges[c].size();i++){
            int u=edges[c][i];
            if(vis[u]==1)continue;
            vis[u]=1;
            count=max(count,dfs(u,count+1));
    }
    return count;
}

int print_ans(int c)
{
   // cout<<c<<endl;
    vis[c]=1;
    cout<<ara[c]<<' ';
    for(int i=0;i<edges[c].size();i++){
            int u=edges[c][i];
            if(vis[u]==1)continue;
            vis[u]=1;
            print_ans(u);
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }

    for(int i=1;i<=n;i++){
        lli v=0;
        if(ara[i]%3==0)v=ara[i]/3;
        for(int j=1;j<=n;j++){
            if(ara[j]==2*ara[i]) edges[i].push_back(j);
            if(ara[j]==v) edges[i].push_back(j);
        }
    }

    for(int i=1;i<=n;i++){
        memset(vis,0,sizeof(vis));
        int v=dfs(i,1);
        if(n==v){
            memset(vis,0,sizeof(vis));
            print_ans(i);
            break;
        }
    }


}
