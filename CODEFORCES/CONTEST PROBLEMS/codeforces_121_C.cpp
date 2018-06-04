#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define pii pair<int,int>
vector<int>edges[mx];
map<pii,int>my;
map<int,pii>store;
int f=0;

int dfs(int x,int p,int d)
{
    if(x==d)return 1;
    int v=0;
    cout<<x<<' '<<p<<' '<<d<<endl;
    for(int i=0;i<edges[x].size();i++){
        int u=edges[x][i];
        if(u==p)continue;
        if(f==1)continue;
        if(u==d){
                cout<<u<<' '<<x<<endl;
            my[pii(u,x)]++;
            my[pii(x,u)]++;
            f=1;
            return v=max(v,1);
        }
        v=max(v,dfs(u,x,d));
    }
    cout<<x<<' '<<p<<' '<<v<<endl;
    if(v==1){
        my[pii(x,p)]++;
        my[pii(p,x)]++;
    }
    return v;
}
int main()
{
    int n,k,u,v;
    while(cin>>n){
        for(int i=1;i<n;i++){
            cin>>u>>v;
            edges[u].push_back(v);
            edges[v].push_back(u);
            store[i]=pii(u,v);
        }
        cin>>k;
        while(k--){
            cin>>u>>v;
            f=0;
            dfs(u,0,v);
            cout<<my[pii(u,v)]<<endl;
        }
    }
}
