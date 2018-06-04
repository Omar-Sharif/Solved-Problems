#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define inf 10000000000000000
lli clr[105],cost[105][105],n,m,k;
long long dp[105][105][105];

lli optimal(int i,int x,int y)
{
   // cout<<i<<' '<<x<<' '<<y<<endl;
    if(y>k)return inf;
    if(i>n and y!=k)return inf;
    if(i>n and y==k)return 0;
    if(dp[i][x][y]!=-1)return dp[i][x][y];

    lli ret1=inf,ret2=inf;
    if(clr[i]!=0){
        if(clr[i]!=x and x!=0)ret1=optimal(i+1,clr[i],y+1);
        else ret1=optimal(i+1,clr[i],y);
    }
    else{
        for(int j=1;j<=m;j++){
            if(j!=x and x!=0)ret1=min(ret1,optimal(i+1,j,y+1)+cost[i][j]);
            else ret1=min(ret1,optimal(i+1,j,y)+cost[i][j]);
        }
    }
  //  cout<<i<<' '<<x<<' '<<y<<' '<<ret1<<endl;
    return dp[i][x][y]=ret1;
}
int main()
{
    while(cin>>n>>m>>k)
    {
        for(int i=1;i<=n;i++)cin>>clr[i];

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                cin>>cost[i][j];
        }
        memset(dp,-1,sizeof(dp));
        lli x=optimal(1,0,1);
        if(x==inf)x=-1;
        cout<<x<<endl;
    }
}
