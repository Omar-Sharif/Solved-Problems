#include<bits/stdc++.h>
using namespace std;

long long n,m,k;

long long cal(long long mid)
{
    long long i,j,k,v=0;
    mid-=1;
    for(i=1;i<=n;i++)v+=min(m,mid/i);
   // cout<<mid<<' '<<v<<endl;
    return v;
}

int main()
{
    while(cin>>n>>m>>k){
        long long l,h,x,mid,ans=1;
        l=1,h=n*m+1;
        while(l<h){
            mid=(l+h)/2;
          // cout<<l<<' '<<h<<' '<<mid<<endl;
            x=cal(mid);
            if(x<k){
                ans=mid;
                l=mid+1;
            }
            else h=mid;
        }
        cout<<ans<<endl;

    }
}
