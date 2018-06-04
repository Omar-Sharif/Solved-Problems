#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mx 200010
#define lli long long

struct st
{
    int node,cc,pc;
};

map<int,st>my;
vector<int>edges[mx];

int bfs()
{
    queue<st>q;
    q.push(my[1]);
    int vis[mx];
    memset(vis,0,sizeof(vis));
    vis[1]=1;

    while(!q.empty()){
        st x;
        x=q.front();q.pop();
        int s,c,p;
        s=x.node;c=x.cc;p=x.pc;
        int count=1;
        //cout<<s<<' '<<c<<' '<<p<<endl;
        for(int i=0;i<edges[s].size();i++){
            int v=edges[s][i];
            //cout<<v<<' '<<vis[v]<<endl;
            if(vis[v]==1)continue;
            vis[v]=1;
            if(count==c or count==p)count++;
            if(count==c or count==p)count++;
            st y;
            y.node=v;
            y.cc=count;
            y.pc=c;
            my[v]=y;
            //cout<<y.node<<' '<<y.cc<<' '<<y.pc<<endl;
            q.push(y);
            count++;
        }
    }
}

int main()
{
    int n,u,v;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    st a;
    a.node=1,a.cc=1;a.pc=0;
    my[1]=a;
    bfs();

    int mxx=3;
    for(int i=1;i<=n;i++){
        st x;
        x=my[i];
        mxx=max(mxx,x.cc);
    }
    cout<<mxx<<endl;

    for(int i=1;i<=n;i++){
        st x;
        x=my[i];
        cout<<x.cc<<' ';
    }
}

