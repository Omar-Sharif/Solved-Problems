#include<bits/stdc++.h>
using namespace std;

#define mx 100010
vector<int>edges[mx];
int vis[mx],level[mx],par[mx],sparse[mx][20],n;

void dfs(int node)
{
    vis[node]=1;
    for(int i=0;i<edges[node].size();i++){
        int v=edges[node][i];
        if(vis[v])continue;
        par[v]=node;
        level[v]=level[node]+1;
        dfs(v);
    }
}
void init()
{
    memset(sparse,-1,sizeof sparse);
    for(int i=1;i<=n;i++)sparse[i][0]=par[i];

    for(int j=1;(1<<j)<=n;j++){
        for(int i=1;i<=n;i++){
            if(sparse[i][j-1]!=-1)sparse[i][j]=sparse[sparse[i][j-1]][j-1];
        }
    }
}
int query(int p,int q)
{
    if(level[p]<level[q])swap(p,q);
    int m=log2(level[p]);

    for(int i=m;i>=0;i--){
        if(level[p]-(1<<i)>=level[q])p=sparse[p][i];
    }
    if(p==q)return p;
    m=log2(level[p]);

    for(int i=m;i>=0;i--){
        if(sparse[p][i]!=-1 and sparse[p][i]!=sparse[q][i]){
            p=sparse[p][i];
            q=sparse[q][i];
        }
    }
    return par[p];
}
int dist(int x,int y)
{
    return level[x]+level[y]-2*level[query(x,y)];
}

int main()
{
    int q,x,y,z,a,b,c,d;
    cin>>n>>q;
    for(int i=1;i<n;i++){
        scanf("%d %d",&x,&y);
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    dfs(1);init();
    while(q--){
        int d,s=100000000,ss=0;
        scanf("%d %d %d",&a,&b,&c);
        x=query(a,b);
        ss=dist(a,x)+dist(b,x)+dist(c,x);
        if(ss<=s)d=x,s=ss;
        x=query(a,c);
        ss=dist(a,x)+dist(b,x)+dist(c,x);
        if(ss<=s)d=x,s=ss;
        x=query(b,c);
        ss=dist(a,x)+dist(b,x)+dist(c,x);
        if(ss<=s)d=x,s=ss;
        printf("%d %d\n",d,s);
    }
}
