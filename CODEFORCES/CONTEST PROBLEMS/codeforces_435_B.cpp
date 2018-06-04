#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
vector<int>edges[mx];
int level[mx],vis[mx];
lli value[mx];

int bfs()
{
    queue<int>q;
    q.push(1);

    vis[1]=level[1]=1;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<edges[u].size();i++){
            int xx=edges[u][i];
            if(vis[xx]==1)continue;
            vis[xx]=1;
            level[xx]=level[u]+1;
            q.push(xx);
        }
    }
}
int main()
{
    int n,x,y;
    cin>>n;

    for(int i=1;i<n;i++){
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    bfs();
    int count=0,count1=0;
    for(int i=1;i<=n;i++){
        if(level[i]%2==0)count++;
        else count1++;
    }
    lli mxx=0;

    for(int i=1;i<=n;i++){
        if(level[i]%2==0)mxx+=count1-edges[i].size();
        else mxx+=count-edges[i].size();
    }
    cout<<mxx/2<<endl;
}

