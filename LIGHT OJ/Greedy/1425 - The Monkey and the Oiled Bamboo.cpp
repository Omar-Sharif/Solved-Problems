#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

lli ara[mx],n;

lli func(lli k)
{
    int flag=1;

    for(int i=1;i<=n;i++){
        if(ara[i]-ara[i-1]>k){
            flag=0;
            break;
        }
        else if(ara[i]-ara[i-1]==k)k--;
    }
    return flag;
}
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);

        for(int i=1;i<=n;i++)
            scanf("%lld",&ara[i]);

        lli low=1,high=100000000000,mid,ans=0;
        int flag;

        while(low<=high)
        {
            mid=(low+high)/2;
            flag=func(mid);
            if(flag==1){
                high=mid-1;
                ans=mid;
            }
            else low=mid+1;
        }
        printf("Case %d: %lld\n",++cas,ans);
    }
}
