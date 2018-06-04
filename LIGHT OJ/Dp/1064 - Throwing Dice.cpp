#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define pii pair<int,int>
lli n,x,sum;
lli dp[7][25][155];

lli optimal(int i,int amount,int c)
{
    if(dp[i][c][amount]!=-1)return dp[i][c][amount];
    if(c>=n){
        if(amount>=x)return 1;
        else return 0;
    }
    lli ret1=0;
    for(int j=1;j<=6;j++){
        ret1+=optimal(j,amount+j,c+1);
    }
    return dp[i][c][amount]=ret1;
}

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--){
        cin>>n>>x;
        lli k=1;
        for(int i=1;i<=n;i++)k*=6;
        memset(dp,-1,sizeof dp);

        lli v=optimal(0,0,0);
        lli a=__gcd(k,v);
        lli p=(v/a),q=(k/a);

        if(q==1)printf("Case %d: %lld\n",++cs,p);
        else printf("Case %d: %lld/%lld\n",++cs,p,q);
    }
}
