#include<bits/stdc++.h>
using namespace std;

#define pii pair<long long,long long>
long long ara[100010],n,m,p,c,coun=0;
vector<pii>edges[100010];

long long bfs(long long src,long long cost)
{
    long long u,v,x,i,j,a=0;
    u=src;
    coun++;

    for(i=0;i<edges[u].size();i++){
        v=edges[u][i].first;
        x=edges[u][i].second;
        if(ara[v]>=cost+x){
            j=max(a,cost+x);
            bfs(v,j);
        }
    }
}
int main()
{
    long long i,j,k,count=0;

    while(cin>>n)
    {
        for(i=1;i<=n;i++)cin>>ara[i];
        for(i=2;i<=n;i++){
            cin>>p>>c;
            edges[p].push_back(pii(i,c));
        }

        bfs(1,0);
        cout<<n-coun<<endl;
    }
}

