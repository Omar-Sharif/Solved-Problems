#include<bits/stdc++.h>
using namespace std;

int vis[100010],ara1[100010];

int main()
{
    int n,k,x;
    cin>>n>>k;

    for(int i=1;i<=k;i++){
        scanf("%d",&x);
        vis[x]=1;
    }

    for(int i=1;i<=k;i++){
        scanf("%d",&x);
        ara[i]=x;
        int y,z;
        if(x==n)y=1,z=x-1;
        else if(x==1)y=x+1,z=n;
        else y=x+1,z=x-1;
        vis[x]=vis[y]+vis[z];
    }

    for(int i=1;i<=k;i++){
        x=ara[i];
        if(vis[x]==1){
            int y,z;
            if(x==n)y=1,z=x-1;
            else if(x==1)y=x+1,z=n;
            else y=x+1,z=x-1;
            if(vis[y]==1)vis[y]=0;
            if(vis[z]==1)vis[z]=0;
            count++;
        }
    }
}
