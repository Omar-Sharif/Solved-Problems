#include<bits/stdc++.h>
using namespace std;

int vis[1010],n,m;

struct st
{
    int x;
    char ch;
}ara[1010];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i].x>>ara[i].ch;
    }
    int count=0;

    for(int i=1;i<=n;i++){
        if(vis[i]==1)continue;
        for(int j=i+1;j<=n;j++){
            if(vis[j]==1)continue;
            if(ara[i].x== ara[j].x and ara[i].ch !=ara[j].ch){
                count++;
                vis[j]=1;
                break;
            }
        }
    }
    cout<<count<<endl;
}
