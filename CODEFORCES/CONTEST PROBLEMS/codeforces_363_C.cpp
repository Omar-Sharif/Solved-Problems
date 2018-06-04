#include<bits/stdc++.h>
using namespace std;

int dp[110][5],ara[110],n;
#define mx 10000000
int optimal(int i,int x)
{
    if(i>n)return 0;
    if(dp[i][x]!=-1)return dp[i][x];
    int ret1=mx,ret2=mx;

    if(x==0 and (ara[i]==1 or ara[i]==2))ret1=optimal(i+1,ara[i]);
    else if(x==0 and ara[i]==0)ret1=optimal(i+1,0)+1;
    else if(x==0 and ara[i]==3){
        ret1=optimal(i+1,1);
        ret2=optimal(i+1,2);
    }

    else if(x==1 and (ara[i]==1 or ara[i]==0))ret1=optimal(i+1,0)+1;
    else if(x==1 and (ara[i]==2 or ara[i]==3))ret1=optimal(i+1,2);

    else if(x==2 and (ara[i]==2 or ara[i]==0))ret1=optimal(i+1,0)+1;
    else if(x==2 and (ara[i]==1 or ara[i]==3))ret1=optimal(i+1,1);

   // cout<<i<<' '<<ret1<<' '<<ret2<<endl;
    return dp[i][x]=min(ret1,ret2);
}
int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];
        memset(dp,-1,sizeof(dp));

        cout<<optimal(1,0)<<endl;
    }
}
