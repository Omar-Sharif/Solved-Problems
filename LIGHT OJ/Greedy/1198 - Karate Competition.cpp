#include<bits/stdc++.h>
using namespace std;

int ara[70],ara1[70],dp[60][60][4],n;

int optimal(int i,int j,int c)
{
    if(i>=n or j>=n)return 0;
    if(dp[i][j][c]!=-1)return dp[i][j][c];
    int sum=0,sum1=0;

   // cout<<i<<' '<<j<<' '<<ara[i]<<' '<<ara1[j]<<endl;
    if(ara[i]>ara1[j]){
        sum=optimal(i+1,j+1,2)+2;
    }
    else if(ara[i]<ara1[j]){
        sum=optimal(i,j+1,0)+0;
    }
    else{
         sum=optimal(i+1,j+1,1)+1;
         sum1=optimal(i,j+1,0)+0;
    }
  //  cout<<i<<' '<<j<<' '<<sum<<' '<<sum1<<endl;
    return dp[i][j][c]=max(sum,sum1);
}

bool cmp(int a,int b)
{
    if(a>b)return true;
    else return false;
}
int main()
{
    int cas=0,t;
    scanf("%d",&t);
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(int i=0;i<n;i++)
            scanf("%d",&ara1[i]);

        sort(ara,ara+n,cmp);
        sort(ara1,ara1+n,cmp);

       /* for(int i=0;i<n;i++)
            cout<<ara[i]<<' '<<ara1[i]<<endl;*/
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n",++cas,optimal(0,0,0));
       // cout<<optimal(0,0)<<endl;
    }
}
