#include<bits/stdc++.h>
using namespace std;

int dp[4010][5],n,a,b,c;

int optimal(int n,int x)
{
    if(n==0)return 0;
    if(dp[n][x]!=-1)return dp[n][x];
    int ret1=-INFINITY,ret2=-INFINITY,v,ret3=-INFINITY;

    if(n>=a)ret1=optimal(n-a,1)+1;
    if(n>=b)ret2=optimal(n-b,2)+1;
    if(n>=c)ret3=optimal(n-c,3)+1;
    v=max(ret1,max(ret2,ret3));

    return dp[n][x]=max(ret1,max(ret2,ret3));
}
int main()
{
    while(cin>>n>>a>>b>>c)
    {
        memset(dp,-1,sizeof(dp));
        cout<<optimal(n,0)<<endl;
    }
}
