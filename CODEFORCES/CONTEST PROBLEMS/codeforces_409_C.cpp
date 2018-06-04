#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long double
lli n,p;
struct st
{
    long double a,b;
}ara[mx];

bool check(long double mid)
{
    lli t=(mid/p);

    for(int i=0;i<n;i++){
        lli x=max(ara[i].a*t-ara[i].b,(lli)0.0);
        mid-=x;
        if(mid<0)return false;
    }
    return true;
}

int main()
{
    cin>>n>>p;

    for(int i=0;i<n;i++){
        cin>>ara[i].a>>ara[i].b;
    }

    long double low,high,mid,a,ans;
    low=0;high=1e19,a=1e19;
    int ct=200;
    while(ct--){
        mid=(low+high)/2;
        if(check(mid)){
            low=mid;
            ans=mid;
        }
        else{
            high=mid;
        }
    }
    if(ans==a)cout<<-1<<endl;
    else{
        ans=(ans/p);
        cout<<fixed<<setprecision(9)<<ans<<endl;
    }
}
