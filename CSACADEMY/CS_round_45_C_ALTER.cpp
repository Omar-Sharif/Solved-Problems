#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
lli ara[mx],leftmx[mx],rightmx[mx];
struct stt
{
    lli ll,rr,xx;
}qq[mx];

int  main()
{
    lli n,q,qt,l,r,x,j=1;
    cin>>n>>q;
    qt=q;
    while(q--)
    {
        scanf("%lld %lld %lld",&l,&r,&x);
        ara[l]+=x;ara[r+1]-=x;
        qq[j].ll=l;qq[j].rr=r;qq[j].xx=x;
        j++;
    }
    lli mxx=0,a,b,c;
    for(int i=1;i<=n;i++){
        ara[i]+=ara[i-1];
        mxx=max(mxx,ara[i]);
        leftmx[i]=mxx;
    }
    mxx=0;
    for(int i=n;i>=1;i--)
    {
        mxx=max(mxx,ara[i]);
        rightmx[i]=mxx;
    }
    mxx=1e15;
    for(int i=1;i<=qt;i++){
        a=leftmx[qq[i].ll-1];
        b=leftmx[qq[i].rr]-qq[i].xx;
        c=rightmx[qq[i].rr+1];
        mxx=min(mxx,max(a,max(b,c)));
    }
    cout<<mxx<<endl;
}


