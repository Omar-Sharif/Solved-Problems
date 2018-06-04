#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
vector<pii>edges[110];
int n,vis[110];

int dfs(int x,int cost,int coun)
{
    vis[x]=1;
    int z=cost;
    for(int i=0;i<edges[x].size();i++){
        int uu=edges[x][i].first;
        int vv=edges[x][i].second;
      //  cout<<x<<' '<<uu<<' '<<vv<<' '<<coun<<endl;
        if(uu==1 and coun==n-1)return z+vv;
        if(vis[uu]==1)continue;
        z=dfs(uu,cost+vv,coun+1);
    }
    return z;
}
int main()
{
    int t,x,y,z,ct,cs=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);

        ct=0;
        memset(vis,0, sizeof vis);
        for(int i=0;i<110;i++)edges[i].clear();

        for(int i=0;i<n;i++){
            scanf("%d %d %d",&x,&y,&z);
            edges[x].push_back(pii(y,0));
            edges[y].push_back(pii(x,z));
            ct+=z;
        }
        z=dfs(1,0,0);
        ct-=z;
        printf("Case %d: %d\n",++cs,min(ct,z));
    }
}
