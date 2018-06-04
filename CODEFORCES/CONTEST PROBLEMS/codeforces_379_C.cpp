#include<bits/stdc++.h>
using namespace std;

#define mx 200010
#define lli long long
struct st
{
    lli a,b;
}ara[mx],ara1[mx];

bool cmp(st x,st y)
{
    if(x.b<y.b)return true;
    else if(x.b==y.b){
        if(x.a<y.a)return true;
        else return false;
    }
    else return false;
}

lli binary(lli s,lli k,lli x)
{
    lli low=0,high=k-1,mid,ans=-1;

    while(low<=high){
        mid=(low+high)/2;
        if(ara1[mid].b<=s){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }

    if(ans==-1)return 0;
    else{
        return ara1[ans].a*x;
    }
}

int main()
{
    lli n,m,k,x,s,mxx,p,q,r,sum,mx1;

    scanf("%lld %lld %lld",&n,&m,&k);
    scanf("%lld %lld",&x,&s);

    for(int i=0;i<m;i++)scanf("%lld",&ara[i].a);
    for(int i=0;i<m;i++)scanf("%lld",&ara[i].b);

    for(int i=0;i<k;i++)scanf("%lld",&ara1[i].a);
    for(int i=0;i<k;i++)scanf("%lld",&ara1[i].b);

    sort(ara,ara+m,cmp);

    mxx=(n*x)-binary(s,k,x);
    for(int i=0;i<m;i++){
        if(ara[i].b>s)break;
        mx1=(n*ara[i].a)-binary(s-ara[i].b,k,ara[i].a);
        mxx=min(mxx,mx1);
    }
    cout<<mxx<<endl;
}
