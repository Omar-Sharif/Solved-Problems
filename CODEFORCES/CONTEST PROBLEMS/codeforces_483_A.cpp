#include<bits/stdc++.h>
using namespace std;

int ara[1010],vis[1010],n;

int check(int f)
{
    if(f==1){
        int mx=0,ans=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==1)continue;
            if(ara[i]>=mx){
                mx=ara[i];
                ans=i;
            }
        }
        vis[ans]=1;
    }
    else{
        int mx=1000000000,ans=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==1)continue;
            if(ara[i]<=mx){
                mx=ara[i];
                ans=i;
            }
        }
        vis[ans]=1;
    }
}

int main()
{
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>ara[i];

        int count=1,f=1;
        while(count<n){
            check(f);
            if(f==1)f=2;
            else if(f==2)f=1;
            count++;
        }

        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                cout<<ara[i]<<endl;
                return 0;
            }
        }
}
