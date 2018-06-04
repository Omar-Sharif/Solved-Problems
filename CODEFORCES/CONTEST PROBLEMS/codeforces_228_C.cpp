#include<bits/stdc++.h>
using namespace std;

int ara[110],vis[110];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    int s=0,mx=1;
    while(1){
        mx=0;
        for(int i=0;i<n;i++){
            if(vis[i]==1)continue;
            if(ara[i]>=mx){
                vis[i]=1;
                mx++;
            }
        }
        if(mx==0)break;
        s++;
    }
    cout<<s<<endl;
}
