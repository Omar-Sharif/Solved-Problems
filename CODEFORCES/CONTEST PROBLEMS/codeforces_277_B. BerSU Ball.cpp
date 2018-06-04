#include<bits/stdc++.h>
using namespace std;

int ara[110],ara1[110],vis[110];

int main()
{
    int n,m,value=0;
    while(cin>>n){
        for(int i=0;i<n;i++)cin>>ara[i];
        cin>>m;
        for(int i=0;i<m;i++)cin>>ara1[i];

        sort(ara,ara+n);
        sort(ara1,ara1+m);
        memset(vis,0,sizeof(vis));

        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[j]==1)continue;
                if(ara1[j]==ara[i] or ara1[j]==ara[i]+1 or ara1[j]==ara[i]-1){
                    vis[j]=1;
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}
