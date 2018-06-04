#include<bits/stdc++.h>
using namespace std;

#define INFINITY 10000000
int tsum,dp[3][105][60],n,ara[105],mid;

int optimal(int b,int i,int c,int s)
{
    if(dp[b][i][c]!=-1)return dp[b][i][c];
    if(c==mid){
        int z=tsum-s;
        return abs(z-s);
    }
    if(i>=n)return INFINITY;

    int ret1=INFINITY,ret2=INFINITY;

    ret1=min(ret1,optimal(1,i+1,c+1,s+ara[i]));
    ret2=min(ret2,optimal(0,i+1,c,s));

   // cout<<i<<' '<<c<<' '<<ret1<<' '<<ret2<<endl;

    return dp[b][i][c]=min(ret1,ret2);
}
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        tsum=0;

        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
            tsum+=ara[i];
        }
        mid=(n+1)/2;

        int x=optimal(0,0,0,0);
      //  cout<<x<<endl;
        int v1=(tsum+x)/2;
        int v2=abs(tsum-v1);

        printf("Case %d: %d %d\n",++cas,min(v1,v2),max(v1,v2));
    }
}
