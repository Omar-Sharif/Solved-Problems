#include<bits/stdc++.h>
using namespace std;
vector<int>edges[4010];
int ara[4010][4010];
int main()
{
    int n,m,a,b;

    while(cin>>n>>m)
    {
        for(int i=0;i<m;i++){
            cin>>a>>b;
            ara[a][b]=1;
            ara[b][a]=1;
            edges[a].push_back(b);
            edges[b].push_back(a);
        }

        int count=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=0;j<edges[i].size();j++){
                int v=edges[i][j];
                for(int k=0;k<edges[v].size();k++){
                    int u=edges[v][k];
                    if(ara[i][u]==1 or ara[u][i]==1){
                        int sum=edges[i].size()+edges[u].size()+edges[v].size();
                        sum-=6;
                        //cout<<i<<' '<<v<<' '<<u<<' '<<sum<<endl;
                        count=min(count,sum);
                    }
                }
            }
        }

        if(count==INT_MAX)count=-1;
        cout<<count<<endl;

    }
}
