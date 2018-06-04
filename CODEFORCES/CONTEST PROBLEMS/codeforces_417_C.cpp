#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[100010],n,s;

lli check(lli k)
{
    lli ara1[100010],sum=0;
    for(lli i=1;i<=n;i++)
        ara1[i]=ara[i]+i*k;
    sort(ara1+1,ara1+n+1);

    for(int i=1;i<=k;i++){
        sum+=ara1[i];
        if(sum>s){
            sum=-1;
            return sum;
        }
    }
    return sum;
}
int main()
{
    cin>>n>>s;

    for(int i=1;i<=n;i++)cin>>ara[i];
    lli l=0,h=n,mid,ans=0,sum=0,c;

    while(l<=h){
        mid=(l+h)/2;
        c=check(mid);
        if(c==-1)h=mid-1;
        else{
            ans=mid;
            sum=c;
            l=mid+1;
        }
    }
    cout<<ans<<' '<<sum<<endl;
}

