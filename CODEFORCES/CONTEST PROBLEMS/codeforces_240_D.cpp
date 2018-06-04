#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
int dp[2010][2010],n,k;

int optimal(int v,int c)
{
    if(dp[v][c]!=-1)return dp[v][c];
    if(c>=k)return 1;
    int ret1=0;
    for(int i=v;i<=n;i+=v){
        ret1=((ret1%mod)+optimal(i,c+1))%mod;
    }
    return dp[v][c]=(ret1)%mod;
}
int main()
{
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    cout<<optimal(1,0)<<endl;
}
