#include<bits/stdc++.h>
using namespace std;

int dp[105][10010];
int ara[110];
int n,m;
int call(int i,int sum,int c)
{
   // cout<<i<<' '<<sum<<' '<<c<<endl;
    if(dp[i][sum]!=-1)return dp[i][sum];
    if(sum>=m)
        return c;
    if(i>=n+1)
        return -1;
    int profit1=0,profit2=0;

    profit1=call(i+1,sum+ara[i],c+1);
    profit2=call(i+1,sum,c);
    //cout<<i<<' '<<sum<<' '<<profit1<<' '<<profit2<<endl;
    if(profit1==-1){
        dp[i][sum]=profit2;
    }
    else if(profit2==-1){
        dp[i][sum]=profit1;
    }
    else{
      dp[i][sum]=min(profit1,profit2);
    }
    return dp[i][sum];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    cout<<call(1,0,0)<<endl;
}
