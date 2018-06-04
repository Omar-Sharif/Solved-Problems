#include<bits/stdc++.h>
using namespace std;

#define mm 50010
#define pii pair<int,int>
vector<pii>ara;
vector<int>edges[mm];
map<int,int>my[mm];
int n,k;

int dfs(int u,int src,int prev,int c)
{
    for(int i=0;i<edges[src].size();i++){
        int v=edges[src][i];
        if(c+1>k)continue;
        if(v==prev)continue;
      //  cout<<u<<' '<<v<<' '<<src<<' '<<c+1<<endl;
        if(c+1==k){
                //cout<<u<<' '<<v<<endl;
            if(my[u][v]==1)continue;
            ara.push_back(pii(u,v));
            my[u][v]=1;
            my[v][u]=1;
        }
        dfs(u,v,src,c+1);
    }
    return 0;
}
int main()
{
    while(cin>>n>>k)
    {
        int x,y;
        for(int i=1;i<n;i++){
            scanf("%d%d",&x,&y);
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
        //    cout<<"my"<<endl;
            dfs(i,i,0,0);
        }
        cout<<ara.size()<<endl;
       //for(int i=0;i<ara.size();i++)
      //  cout<<ara[i].first<<' '<<ara[i].second<<endl;
    }
}
