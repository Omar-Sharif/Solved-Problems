#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
int ara[mx];

struct st
{
    int prop,sum;
}tree[3*mx];

void init(int node,int b,int e)
{
    int left,right,mid;
    if(b==e){
        tree[node].sum=ara[b];
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
    int n,a,b,x,q;
    while(cin>>n>>q){
        int a,b;
        for(int i=1;i<=n;i++)
            scanf("%d",&ara[i]);
        init(1,1,n);
        scanf("%d %d %d",&a,&b,&x);
        update(1,1,n,a,b,x);
        while(q--){
            scanf("%d %d",&a,&b);
            cout<<query(1,1,n,a,b,0)<<endl;;
        }
    }
}
