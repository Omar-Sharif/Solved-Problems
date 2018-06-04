#include<bits/stdc++.h>
using namespace std;

int ara[1010],ara1[1010],vis[1010];
vector<int>pos,pos1;

int main()
{
    int n,v,va,va1,mis;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>ara[i];
    for(int i=1;i<=n;i++)cin>>ara1[i];

    for(int i=1;i<=n;i++){
        if(vis[ara[i]]==0)vis[ara[i]]=1;
        else va=ara[i];
    }
    for(int i=1;i<=n;i++)
        if(vis[i]==0)mis=i;

    memset(vis,0,sizeof vis);

    for(int i=1;i<=n;i++){
        if(vis[ara1[i]]==0)vis[ara1[i]]=1;
        else va1=ara1[i];
    }

    for(int i=1;i<=n;i++){
        if(ara[i]==va and ara[i]!=ara1[i])pos.push_back(i);
    }

    for(int i=1;i<=n;i++){
        if(ara1[i]==va1 and ara[i]!=ara1[i])pos1.push_back(i);
    }
    for(int i=0;i<pos.size();i++){
        for(int j=0;j<pos1.size();j++)
            if(pos[i]=pos1[i])ara[pos[i]]=mis;
    }
    for(int i=1;i<=n;i++)cout<<ara[i]<<' ';

}
