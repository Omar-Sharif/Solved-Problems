#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
lli n,m,k,value[mx],ara[mx];
struct qu
{
    lli l,r,d;
}q[mx];

struct st
{
    lli prop,sum;
}tree[3*mx];

void init(lli node,lli b,lli e)
{
    lli left,right,mid;
    if(b==e){
        tree[node].sum=0;
        tree[node].prop=0;
        return;
    }

    left=2*node;
    right=left+1;
    mid=(b+e)/2;

    init(left,b,mid);
    init(right,mid+1,e);
    tree[node].sum=tree[left].sum+tree[right].sum;
}

void update(lli node,lli b,lli e,lli i,lli j,lli x)
{
    lli left,right,mid;
    if(b>j or e<i)return;
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

lli query(lli node,lli b,lli e,lli i,lli j,lli carry)
{
    lli left,right,mid,p1,p2;
    if(b>j or e<i)return 0;
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

int main()
{
    lli a,b;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)scanf("%lld",&ara[i]);
    for(int i=1;i<=m;i++){
        scanf("%lld %lld %lld",&q[i].l,&q[i].r,&q[i].d);
    }

    init(1,1,m);
    while(k--){
        scanf("%lld %lld",&a,&b);
        update(1,1,m,a,b,1);
    }

    for(int i=1;i<=m;i++) value[i]=query(1,1,m,i,i,0);

    memset(tree,0,sizeof tree);

    init(1,1,n);
    for(int i=1;i<=m;i++){
        lli vx=value[i]*q[i].d;
        update(1,1,n,q[i].l,q[i].r,vx);
    }
    for(int i=1;i<=n;i++){
        lli vx=query(1,1,n,i,i,0);
        printf("%lld ",vx+ara[i]);
    }
}
