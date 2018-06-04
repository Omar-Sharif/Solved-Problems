#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
lli ara[mx],leftmx[mx],rightmx[mx];

struct st
{
    lli prop,sum;
}tree[3*mx];

struct stt
{
    int ll,rr,xx;
}qq[mx];

void update(int node,int b,int e,int i,int j,lli x)
{
    int left,right,mid;
    if(b>j or e<i) return;
    if(b>=i and e<=j){
        tree[node].sum+=(e-b+1)*x;
        tree[node].prop+=x;
        return;
    }
    left=2*node;
    right=left+1;
    mid=(b+e)/2;

    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);

    tree[node].sum=tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;
}

lli query(int node,int b,int e,int i,int j,lli carry)
{
    int left,right,mid;
    lli p1,p2;
    if(b>j or e<i) return 0;
    if(b>=i and e<=j){
        return tree[node].sum+(e-b+1)*carry;
    }

    left=2*node;
    right=left+1;
    mid=(b+e)/2;

    p1=query(left,b,mid,i,j,carry+tree[node].prop);
    p2=query(right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}

int  main()
{
    int n,q,qt,l,r,x,j=1;
    cin>>n>>q;
    qt=q;
    while(q--)
    {
        scanf("%d %d %d",&l,&r,&x);
        qq[j].ll=l;qq[j].rr=r;qq[j].xx=x;
        update(1,1,n,l,r,x);
        j++;
    }

    lli mxx=0,a,b,c;
    for(int i=1;i<=n;i++){
        ara[i]=query(1,1,n,i,i,0);
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

