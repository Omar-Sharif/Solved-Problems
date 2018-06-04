#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

lli ara[mx],my[mx],n,m,k;

lli check(lli x)
{
    int vis[mx]={0};
    lli sum=0,c=0,a,s;

    for(int i=1;i<=x;i++){
        a=ara[i];
        if(a==0 or vis[a]==1){
            sum++;
            continue;
        }
        if(sum>=my[a]){
            vis[a]=1;
            c++;
        }
        sum++;
    }
    return c;
}
int main()
{
    while(cin>>n>>m){
        lli sum=0;
        for(int i=1;i<=n;i++)
            cin>>ara[i];

        for(int i=1;i<=m;i++){
            cin>>my[i];
            sum+=my[i];
        }

        lli low=sum+m,c,high=n,mid,ans=-1;

        while(low<=high){
            mid=(low+high)/2;
            c=check(mid);
            if(c==m){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<ans<<endl;
    }
}
