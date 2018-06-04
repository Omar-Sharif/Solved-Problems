#include<bits/stdc+.h>
using namespace std;
#define mx 500010
#define lli long long

lli ara[mx],sum[mx],n,l,h;

lli bi(lli i)
{
    lli mid,ans=0;
    h=n;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(ara[mid]>=ara[i]*2){
            ans=1;
            h=mid-1;
        }
        else(ara[mid]<ara[i]*2)low=mid+1;
    }
    cout<<l<<' '<<ans<<endl;
    return ans;
}
int main()
{
    lli a,b,c,d;
    while(cin>>n){
        for(int i=1;i<=n;i++)cin>>ara[i];

        sort(ara+1,ara+n+1);
        a=(n/2);
        l=a+1;

        for(int i=1;i<=a;i++){
            c+=bi(i);
        }
        cout<<n-c<<endl;
    }
}

