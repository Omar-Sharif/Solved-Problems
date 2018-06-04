#include<bits/stdc++.h>
using namespace std;

#define mx 110
vector<int>edges[mx];
int vis[mx],n,flag=1;

int dfs(int u,int p,int c)
{
    int l=100000,v;
    vis[u]=1;
    if(p==u and c!=0){
        flag=1;
        return c;
    }
    for(int i=0;i<edges[u].size();i++){
        v=edges[u][i];
        if(v==u and v==p)return 1;
        if(v==u and v!=p)return l;
        if(vis[v]==1 and v==p){
            flag=1;
            return c+1;
        }

        if(vis[v]==1)continue;
        l=min(l,dfs(v,p,c+1));
    }
    return l;
}
int main()
{
    while(cin>>n)
    {
        long long c=1,d,x,v,f;
        for(int i=1;i<=n;i++){
            cin>>x;
            edges[i].push_back(x);
        }

        f=1;
        for(int i=1;i<=n;i++){
            flag=0;
            memset(vis,0,sizeof(vis));
            d=dfs(i,i,0);

            if(d==100000){
                f=0; break;
            }
            if(d%2==0) d=d/2;
            c=(c*d)/__gcd(c,d);
        }
        if(f==1)cout<<c<<endl;
        else cout<<-1<<endl;
    }
}

