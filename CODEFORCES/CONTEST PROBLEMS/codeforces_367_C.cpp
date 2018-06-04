#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define inf 10000000000000000

map<int,string>ss[100010];
string z;
lli ara[100010],dp[100010][5],n;

lli optimal(int i,int f)
{
   // cout<<i<<' '<<f<<endl;
    if(i>n)return 0;
    if(dp[i][f]!=-1)return dp[i][f];
    lli ret1=inf,ret2=inf;

    if(ss[i][1]>=ss[i-1][f])ret1=optimal(i+1,1);
    if(ss[i][2]>=ss[i-1][f])ret2=optimal(i+1,2)+ara[i];

    //cout<<i<<' '<<f<<' '<<ret1<<' '<<ret2<<endl;
    return dp[i][f]=min(ret1,ret2);
}
int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];
        for(int i=1;i<=n;i++){
            cin>>z; ss[i][1]=z;
            reverse(z.begin(),z.end());
            ss[i][2]=z;
        }

        memset(dp,-1,sizeof(dp));
        lli x=optimal(1,0);
        if(x>=inf)x=-1;
        cout<<x<<endl;
    }
}
