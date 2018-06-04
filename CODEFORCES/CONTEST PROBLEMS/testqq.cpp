#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define inf 10000000000000000

string s[100010],s1[100010],z;
lli ara[100010],dp[100010][5],n;

lli optimal(int i,int f)
{
    cout<<i<<' '<<f<<endl;
    if(i>n)return 0;
    if(dp[i][f]!=-1)return dp[i][f];
    lli ret1=inf,ret2=inf;

    if(f==1){
        if(s[i+1]>=s[i])ret1=optimal(i+1,1);
        if(s1[i+1]>=s[i])ret2=optimal(i+1,2)+ara[i];
    }
    else{
        if(s[i+1]>=s1[i])ret1=optimal(i+1,1)+ara[i];
        if(s1[i+1]>=s1[i])ret2=optimal(i+1,2);
    }


    cout<<i<<' '<<f<<' '<<ret1<<' '<<ret2<<endl;
    return dp[i][f]=min(ret1,ret2);
}
int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];
        for(int i=1;i<=n;i++){
                cin>>z;
                s[i]=z;
                reverse(z.begin(),z.end());
                s1[i]=z;
        }

        for(int i=1;i<=n;i++)
            cout<<s[i]<<' '<<s1[i]<<endl;
        memset(dp,-1,sizeof(dp));
        lli x=optimal(0,1);
        if(x==inf)x=-1;
        cout<<x<<endl;
    }
}
