#include<bits/stdc++.h>
using namespace std;
#define mx 100010
struct st
{
    long long v,f;
}ara[mx];
long long sum[mx],d,n;

bool cmp(st a,st b)
{
    if(a.v<b.v)return true;
    if(a.v==b.v and a.f>b.f)return true;
    else return false;
}
long long bi(long long i)
{
    long long low=i,high=n,mid,ans=ara[i].f,x;

    while(low<=high)
    {
        mid=(low+high)/2;
        x=ara[mid].v;
        if(x-ara[i].v<d){
            ans=sum[mid]-sum[i-1];
            low=mid+1;
        }
        else high=mid-1;
    }
    //cout<<ans<<endl;
    return ans;
}
int main()
{
    while(cin>>n>>d){
        for(int i=1;i<=n;i++)
            cin>>ara[i].v>>ara[i].f;

        sort(ara+1,ara+n+1,cmp);
        /*for(int i=1;i<=n;i++)
            cout<<ara[i].v<<' '<<ara[i].f<<endl;*/

        long long ans=0;
        for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+ara[i].f;
        }

        for(int i=1;i<=n;i++){
            ans=max(bi(i),ans);
        }
        cout<<ans<<endl;
    }
}
