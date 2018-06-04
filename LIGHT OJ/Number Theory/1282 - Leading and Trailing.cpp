#include<bits/stdc++.h>
using namespace std;
#define lli long long

lli bigmod(lli n,lli k,lli md)
{
    if(k==0)return 1;
    if(k%2==0){
        lli x=bigmod(n,k/2,md);
        return (x*x)%md;
    }
    return (n%md*bigmod(n,k-1,md))%md;
}
int main()
{
    int t,cs=0;
    lli n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n,&k);
        double lead=1.0*k*log10(1.0*n);
        lead-=long(lead);
        lli ans=pow(10.0,lead)*100;
        printf("Case %d: %lld %03lld\n",++cs,ans,bigmod(n,k,1000));
    }
}

