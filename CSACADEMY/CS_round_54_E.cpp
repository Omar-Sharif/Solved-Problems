#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define inf 1e16
#define mx 5010
#define pii pair<int,lli>

lli diseven[mx],disodd[mx];
vector<pii>edges[mx];
int n,m;

struct st
{
    lli u,c;
    st(lli a,lli b)
    {
        u=a;
        c=b;
    }
    bool operator<(const st &p)const{return c>p.c;}
};
priority_queue<st>q;

int main()
{
    int u,v,ans=-1;
    lli c,d;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>u>>v>>c;
        edges[u].push_back(pii(v,c));
        edges[v].push_back(pii(u,c));
    }

    for(int i=1;i<=n;i++)diseven[i]=inf,disodd[i]=inf;
    diseven[1]=0;
    q.push(st(1,0));

    while(!q.empty()){
        st x=q.top();q.pop();
        u=x.u,c=x.c;
        if(u==n){
            ans=c;
            break;
        }

        for(int i=0;i<edges[u].size();i++){
            v=edges[u][i].first;
            d=edges[u][i].second;
            if(d<=c){
                d=c+1;
            }
            else{
               lli cc=d-c;
               if(cc%2==0)d+=1;
               else d+=2;
            }
            if(d%2==0){
                if(diseven[v]>d){
                    diseven[v]=d;
                    q.push(st(v,d));
                }
            }
            else{
                if(disodd[v]>d){
                    disodd[v]=d;
                    q.push(st(v,d));
                }
            }
        }
    }
    cout<<ans<<endl;
}
