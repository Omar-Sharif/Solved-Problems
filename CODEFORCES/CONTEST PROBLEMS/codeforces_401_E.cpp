#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
#define inf 10000000000000
lli dp[mx],n;

struct hanoi
{
    lli a,b,h;
}ara[mx];

bool cmp(hanoi x,hanoi y)
{
    if(x.b>y.b)return true;
    else if(x.b==y.b){
        if(x.a>y.a)return true;
        else return false;
    }
    else return false;
}

lli check(lli i,lli a,lli b)
{
   //if(dp[i]!=-1)return dp[i];
    if(i>n)return 0;
   // cout<<i<<' '<<a<<' '<<b<<' '<<x<<endl;
    lli ret1=0,ret2=0;

    for(int j=i+1;j<=n+1;j++){
        if(ara[j].b<=b and ara[j].b>a){
            ret1=max(ret1,ara[j].h+check(j,ara[j].a,ara[j].b));
        }
    }
    ret2=max(ret2,check(i+1,a,b));
    cout<<"ret "<<' '<<i<<' '<<ret1<<' '<<ret2<<endl;
    return dp[i]=max(ret1,ret2);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i].a>>ara[i].b>>ara[i].h;
    }
    sort(ara+1,ara+n+1,cmp);
    //for(int i=1;i<=n;i++)
     //   cout<<ara[i].a<<' '<<ara[i].b<<' '<<ara[i].h<<endl;
    memset(dp,-1,sizeof(dp));
    cout<<check(0,0,inf)<<endl;;
}
