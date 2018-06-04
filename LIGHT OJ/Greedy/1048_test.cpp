#include<bits/stdc++.h>
using namespace std;

int tsum,dp[55][100500],n,ara[105],mid;

int optimal(int i,int b,int c,int s)
{
  //  cout<<i<<' '<<c<<' '<<s<<endl;
    if(dp[b][c][s]!=-1)return dp[b][c][s];
    if(c==mid){
        int z=tsum-s;
       // cout<<"final "<<i<<' '<<c<<' '<<z<<' '<<s<<endl;
        return abs(z-s);
    }
    if(i>=n)return INFINITY;

    int ret1=INFINITY,ret2=INFINITY;

    ret1=min(ret1,optimal(i+1,1,c+1,s+ara[i]));
    ret2=min(ret2,optimal(i+1,0,c,s));

   // cout<<i<<' '<<c<<' '<<ret1<<' '<<ret2<<endl;

    return dp[b][c][s]=min(ret1,ret2);
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
