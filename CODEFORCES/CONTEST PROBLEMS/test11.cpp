#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
#define inf 10000000000000000
lli ara[mx];
lli n,m,w;

int check(lli value)
{
    lli my[n+10];
    lli a=0,b=0;
    memset(my,0,sizeof(my));

    for(int i=1;i<=n;i++){
        if(i-w>=1)a-=my[i-w];

        if(ara[i]+a<value){
            my[i]+=value-ara[i]-a;
            a+=my[i];
            b+=my[i];
        }
        if(b>m)return 0;
    }
  //  cout<<b<<' '<<m<<endl;
    if(b<=m)return 1;;
    return 0;
}

int main()
{
    while(cin>>n>>m>>w){
        for(int i=1;i<=n;i++)
            scanf("%lld",&ara[i]);

        lli l=1,h=inf,mid,ans=1,c;
        while(l<=h){
            mid=(l+h)/2;
            c=check(mid);
           // cout<<mid<<' '<<c<<endl;
            if(c==1){
                l=mid+1;
                ans=mid;
            }
            else h=mid-1;
        }
        cout<<ans<<endl;
    }
}
