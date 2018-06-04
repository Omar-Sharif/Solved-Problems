#include<bits/stdc++.h>
using namespace std;

#define mx 1010
#define lli long long
#define pii pair<long long,long long>

lli n,m,cap,l;
struct st
{
    lli beut,wgt;
}my[mx];

vector<int>edges[mx];
int vis[mx];
pii group[mx];
lli dp[1005][1005];

pii dfs(lli u,lli b,lli w)
{
    vis[u]=1;
    pii a=pii(b,w);
    for(int i=0;i<edges[u].size();i++){
        lli x=edges[u][i];
        if(vis[x]==0) a=dfs(x,b+my[x].beut,w+my[x].wgt);
    }
    //cout<<u<<' '<<a.first<<' '<<a.second<<endl;
    //group[u]=a;
    return a;
}

lli optimal(int u,int w)
{
    if(u>n)return 0;
    if(dp[u][w]==-1)return dp[u][w];
  //  cout<<u<<' '<<w<<endl;
    lli profit1=0,profit2=0,profit3=0;
    lli nw=my[u].wgt,np=my[u].beut,ngp=group[u].first,ngw=group[u].second;
    //cout<<np<<' '<<nw<<' '<<ngp<<' '<<ngw<<endl;


    if(nw+w<=cap) profit2=np+optimal(u+1,nw+w);
    if(ngw+w<=cap)profit3=ngp+optimal(u+1,ngw+w);
    profit1=optimal(u+1,w);
    cout<<"p "<<profit1<<' '<<profit2<<' '<<profit3<<endl;

    return dp[u][w]=max(profit1,max(profit2,profit3));
}
int main()
{
    int x,y,a,b,c;
    cin>>n>>m>>cap;

    for(int i=1;i<=n;i++){
        cin>>my[i].wgt;
    }
    for(int i=1;i<=n;i++){
        cin>>my[i].beut;
    }
    for(int i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    memset(vis,0,sizeof(vis));

    for(int i=1;i<=n;i++){
        if(vis[i]==0) group[i]=dfs(i,my[i].beut,my[i].wgt);
    }

    cout<<optimal(1,0)<<endl;
}


