#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<int,int>

pii lr[200010],lrcnt[200010];
int ara[200010];
bool vis[200010];

int main()
{
    int n,mx=0;
    cin>>n;

    for(int i=1;i<=n;i++)scanf("%d",&ara[i]);

    int l=0,r=n+1,lcnt=0,rcnt=0,cnt=0;

    for(int i=1;i<=n;i++){
        if(ara[i]>mx) vis[i]=1;
        mx=max(mx,ara[i]);
    }

    for(int i=1;i<=n;i++){
        if(vis[i]==1){
            lr[i].first=l;
            l=i;
            lrcnt[i].first=++lcnt;
        }
    }

    for(int i=n;i>=1;i--){
        if(vis[i]==1){
            lr[i].second=r;
            r=i;
            lrcnt[i].second=++rcnt;
        }
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==1){
            int a=lr[i].first,b=lr[i].second;
            int value=lrcnt[a].first+lrcnt[b].second;
            mx=ara[a],cnt=0;
            for(int j=a+1;j<b;j++){
                if(j==i)continue;
                if(ara[j]>mx)cnt++;
                mx=max(mx,ara[j]);
            }
            value+=cnt;
           // cout<<i<<' '<<value<<endl;
            ans=max(ans,value);
        }
    }
    cout<<ans<<endl;
}
