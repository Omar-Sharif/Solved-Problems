#include<bits/stdc++.h>
using namespace std;

#define mx 150010
#define lli long long
vector<int>edges[mx];
vector<int>vec;
int vis[mx];

int check()
{
    lli count,count1=0;

    for(int i=0;i<vec.size();i++){
        int u=vec[i];
        //cout<<count1<<' ';
        count1+=edges[u].size();
        //cout<<u<<' '<<count1<<endl;
    }
    count=vec.size();
    count*=(count-1);
   // cout<<count1<<' '<<count<<endl;
    if(count==count1)return 1;
    else return 0;
}

int dfs(int node)
{
    int x=0;
    vis[node]=1;
    for(int i=0;i<edges[node].size();i++){
        int v=edges[node][i];
        if(vis[v]==1)continue;
        vis[v]=1;
        vec.push_back(v);
        dfs(v);
    }
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++){
        if(vis[i]==1 or edges[i].size()==0)continue;
        vec.push_back(i);
        dfs(i);
        int x=check();
        if(x==0){
            cout<<"NO"<<endl;
            return 0;
        }
        vec.clear();
    }
    cout<<"YES"<<endl;
}
