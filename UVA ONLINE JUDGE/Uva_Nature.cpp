#include<bits/stdc++.h>
using namespace std;

#define mx 5010
map<string,int>my;
map<int,int>cnt;
int par[mx];

struct vertex
{
    int u,v;
};
vector<vertex>edges;

int find_r(int r)
{
    if(par[r]==r)return r;
    else{
        par[r]=find_r(par[r]);
        return par[r];
    }
}
int uni(int n)
{
    for(int i=1;i<=n;i++)par[i]=i;

    for(int i=0;i<edges.size();i++){
        int u=find_r(edges[i].u);
        int v=find_r(edges[i].v);
        //cout<<edges[i].u<<' '<<u<<' '<<edges[i].v<<' '<<v<<endl;
        if(u!=v){
            par[u]=v;
            for(int j=1;j<=n;j++){
                if(par[j]==u) par[j]=v;
            }
        }
    }
}

int main()
{
    int n,k,u,v,cs=0;
    string a,b;
    while(cin>>n>>k){
        if(n==0 and k==0)break;
        for(int i=1;i<=n;i++){
            cin>>a;
            my[a]=i;
        }

        for(int i=0;i<k;i++){
            cin>>a>>b;
            u=my[a];v=my[b];
            vertex get;
            get.u=u; get.v=v;
            edges.push_back(get);
        }
        uni(n);
        for(int i=1;i<=n;i++){
            cnt[par[i]]++;
        }
        int mxx=0;
        for(int i=1;i<=n;i++)mxx=max(mxx,cnt[i]);
        cout<<mxx<<endl;
        memset(par,0,sizeof par);my.clear();cnt.clear();
        edges.clear();
    }
}
