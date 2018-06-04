#include<bits/stdc++.h>
using namespace std;

#define mx 200010
#define lli long long
int ara[mx+10],ara1[mx+10];

struct st
{
    int prop,sum;
}tree[3*mx+10];

void init(int node,int b,int e)
{
    int left,right,mid;
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

void update(int node,int b,int e,int i,int j,int x)
{
    int left,right,mid;
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
int query(int node,int b,int e,int i,int j,int carry)
{
    int left,right,mid,p1,p2;
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
    int n,a,b,x,q,k;
    cin>>n>>k>>q;
    init(1,1,mx);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&a, &b);
        update(1,1,mx,a,b,1);
    }
    for(int i=1;i<=200000;i++)
        ara[i]=query(1,1,mx,i,i,0);

    int count=0;
    for(int i=1;i<=200000;i++){
        if(ara[i]>=k)count++;
        ara1[i]=count;
    }

    while(q--){
        scanf("%d %d",&a,&b);
        x=ara1[b]-ara1[a-1];
        printf("%d\n",x);
    }
}
