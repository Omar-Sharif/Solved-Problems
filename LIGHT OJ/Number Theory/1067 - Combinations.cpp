#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mod 1000003
int fact[1000010];

void check()
{
    fact[0]=1;
    lli ans=1;
    for(int i=1;i<=1000000;i++){
        ans=(ans*(lli)i%mod)%mod;
        fact[i]=int(ans);
    }
}

lli bigmod(lli a,lli b,lli md)
{
    if(b==0)return 1;
    if(b%2==0){
        lli x=bigmod(a,b/2,md);
        return (x*x)%md;
    }
    return (a%md*bigmod(a,b-1,md))%md;
}

int main()
{
    check();
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        int n,k,x;
        scanf("%d %d",&n,&k);

        lli ans,a;
        a=((lli)fact[k]*(lli)fact[n-k])%mod;
        ans=((lli)fact[n]*bigmod(a,mod-2,mod))%mod;
        printf("Case %d: %lld\n",++cs,ans);
    }
}

