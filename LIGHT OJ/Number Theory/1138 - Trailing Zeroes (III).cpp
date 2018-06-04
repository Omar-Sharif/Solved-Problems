#include<bits/stdc++.h>
using namespace std;

#define mx 100000
#define lli long long

lli check(lli n)
{
    lli sum=0;
    while(n>0){
        sum+=(n/5);
        n/=5;
    }
    return sum;
}
int main()
{
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        lli n;
        scanf("%lld",&n);
        lli low=1,high=1e10,mid,ans=0,c=0;

        while(low<=high){
            mid=(low+high)/2;
            ans=check(mid);

            if(ans<n)low=mid+1;
            else if(ans>n)high=mid-1;
            else{
                c=mid;
                high=mid-1;
            }
        }
        printf("Case %d: ",++cs);
        if(c==0)printf("impossible\n");
        else printf("%lld\n",c);
    }

}
