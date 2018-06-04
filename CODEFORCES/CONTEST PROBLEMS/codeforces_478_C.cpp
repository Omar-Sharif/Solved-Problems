#include<bits/stdc++.h>
using namespace std;

#define mx 200010
#define lli long long
lli ara[mx],sum[mx];
int n;
int check(lli v)
{
    int ans=0;
    int l=1,h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if(sum[mid]<=v){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    return ans;
}
int main()
{
    int q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        scanf("%lld",&ara[i]);
        sum[i]=sum[i-1]+ara[i];
    }

    lli s=0,x;
    for(int i=1;i<=q;i++){
        scanf("%lld",&x);
        s+=x;

        int v=check(s);
        int ans=(n-v);
        if(ans==0){
            ans=n;
            s=0;
        }
        cout<<ans<<endl;
    }
}

