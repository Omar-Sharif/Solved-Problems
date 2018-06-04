#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        lli n,k;
        scanf("%lld %lld",&n,&k);
        lli ans=(lli)(lgamma(n+1)/log(k))+1;
        printf("Case %d: %lld\n",++cs,ans);
    }
}
