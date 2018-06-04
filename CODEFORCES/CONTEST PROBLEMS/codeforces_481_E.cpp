#include<bits/stdc++.h>
using namespace std;

#define lli long long
 lli ara[1010],sum[1010];

int main()
{
    lli n,w;
    cin>>n>>w;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        sum[i]=ara[i]+sum[i-1];
    }
    lli mn=0,mx=0;
    sort(sum+1,sum+n+1);
    mn=min(mn,sum[1]);
    mx=max(mx,sum[n]);
    lli vv=(w-mx+1)-abs(mn);

    cout<<max(0ll,vv)<<endl;
}
