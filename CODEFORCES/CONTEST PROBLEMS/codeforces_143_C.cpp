#include<bits/stdc++.h>
using namespace std;
#define mx 100010
long long ara[mx],sum[mx],n,k;

long long bi(long long l)
{
    long long low=1,high=l,mid,x,y,ans=0;

    while(low<=high){
        mid=(low+high)/2;
        y=(l-mid+1)*ara[l];
        x=sum[l]-sum[mid-1]+k;
        if(x>=y){
                ans=l-mid+1;
                high=mid-1;
        }
        else low=mid+1;
    }
    if(ans>n)ans=n;

    return ans;
}

int main()
{
    while(cin>>n>>k)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];
        sort(ara+1,ara+n+1);
        sum[0]=0;
        for(int i=1;i<=n;i++)
                sum[i]=ara[i]+sum[i-1];

        long long v,ans=0,q;
        for(int i=1;i<=n;i++){
            q=bi(i);
            if(q>ans){
                v=ara[i];
                ans=q;
                //cout<<v<<' '<<ans<<' '<<i<<endl;
            }
        }
        cout<<ans<<' '<<v<<endl;
    }
}
