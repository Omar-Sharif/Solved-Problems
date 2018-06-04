#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[100010],n;

lli check(lli l)
{
    lli c=0;
    for(int i=1;i<=n;i++){
        c+=(ara[i]/l);
    }
    return c;
}
int main()
{
    lli k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }

    lli ans=0,l=1,h=1000000000,mid;
    while(l<=h){
        mid=(l+h)/2;
        lli c=check(mid);
        if(c>=k){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    cout<<ans<<endl;
}
