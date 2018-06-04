#include<bits/stdc++.h>
using namespace std;

int coin[60],number[60];
int dp[55][1010];
int n,k;

int call(int i,int taken_i,int amount)
{
    if(i>=n){
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1)return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0&&taken_i<=number[i]){
            taken_i++;
            ret1=(call(i,taken_i,amount-coin[i]));
    }
    ret2=call(i+1,0,amount);
    return dp[i][amount]=(ret1)%100000007+(ret2)%100000007;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        memset(coin,-1,sizeof(coin));
        memset(number,-1,sizeof(number));
        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>coin[i];
        for(int i=0;i<n;i++)
            cin>>number[i];
        cout<<call(0,0,k)<<endl;
    }
}

