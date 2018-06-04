#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 200010
lli ara[mx],sum[mx];

int optimal(lli x,int n)
{
    int l=0,h=n-1;
    int ans=0;
    while(l<=h){
       int  mid=(l+h)/2;
        if(sum[mid]<x){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    //cout<<ans<<' '<<sum[ans]<<endl;
    return ans;
}
int main()
{
    lli n,m,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%lld",&ara[i]);
        sum[i]=sum[i-1]+ara[i];
    }

    for(int i=1;i<=m;i++){
        scanf("%lld",&x);
        int v=optimal(x,n);
        printf("%d %lld\n",v+1,x-sum[v]);
    }

}
