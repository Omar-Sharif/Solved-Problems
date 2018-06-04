#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

lli ara[mx],sum[mx],dp[mx],n;

lli optimal(lli i)
{
  //  cout<<i<<endl;
    if(i>=mx)return 0;
    if(dp[i]!=-1)return dp[i];

    lli ret1=0,ret2=0,v=mx;
    for(lli j=i+2;j<mx;j++){
        if(sum[j]!=0){
            v=j;
            break;
        }
    }
    ret1=optimal(v)+sum[i];
    if(sum[i+1]==0)
        ret2=optimal(v);
    else ret2=optimal(i+1);
    //cout<<i<<' '<<ret1<<' '<<ret2<<endl;

    return dp[i]=max(ret1,ret2);
}

int main()
{
    while(cin>>n)
    {
        for(lli i=1;i<=n;i++){
            cin>>ara[i];
            sum[ara[i]]+=ara[i];
        }
        memset(dp,-1,sizeof(dp));
        cout<<optimal(1)<<endl;
    }
}
