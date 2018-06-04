#include<bits/stdc++.h>
using namespace std;

#define mxi 200010
#define lli long long
#define pii pair<lli,lli>

lli ara[mxi],sum[mxi],value[mxi],n,k,a,b,p,v,mx;
map<lli,pii>find_max;

int main()
{
    cin>>n>>k;
    for(lli i=1;i<=n;i++)
        scanf("%d",&ara[i]);

    for(lli i=1;i<=n;i++)
        sum[i]=ara[i]+sum[i-1];

    for(lli i=1;i<=n-k+1;i++){
            value[i]=sum[i+k-1]-sum[i-1];
    }

    mx=0;
    for(lli i=1;i<=n-k+1;i++){
        if(value[i]>mx){
            mx=value[i];
            p=i;
        }
        find_max[i]=pii(mx,p);
    }

    mx=0;
    for(lli i=n-k+1;i>k;i--){
        p=find_max[i-k].first;
        v=find_max[i-k].second;
      //  cout<<i<<' '<<i-k<<' '<<p<<' '<<v<<' '<<value[i]<<endl;
        if(p+value[i]>=mx){
            a=v;
            b=i;
            mx=p+value[i];
        }
    }
   // cout<<a<<' '<<b<<endl;
    cout<<min(a,b)<<' '<<max(a,b)<<endl;
}
