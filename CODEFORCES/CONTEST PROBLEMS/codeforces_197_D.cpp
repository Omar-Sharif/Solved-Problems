#include<bits/stdc++.h>
using namespace std;

#define mx 300000
int ara[mx],tree[3*mx],n,lvl;

int pow(int x)
{
    int v=1;
    for(int i=1;i<=x;i++){
        v*=2;
    }
    return v;
}

void init(int node,int b,int e,int c)
{
    int left,right,mid;
    if(b==e){
        tree[node]=ara[b];
        return;
    }
    left=2*node;
    right=left+1;
    mid=(b+e)/2;

    init(left,b,mid,c+1);
    init(right,mid+1,e,c+1);
    //cout<<c<<' '<<lvl-c<<' '<<node<<' ';
    if((lvl-c)%2==1)tree[node]=(tree[left]|tree[right]);
    else tree[node]=(tree[left]^tree[right]);
    //cout<<tree[node]<<endl;
    return;
}
void update(int node,int b,int e,int i,int value,int c)
{
    int left,right,mid;
    if(i>e or i<b)return;
    if(b>=i and e<=i){
        tree[node]=value;
        return;
    }

    left=2*node;
    right=left+1;
    mid=(b+e)/2;
    update(left,b,mid,i,value,c+1);
    update(right,mid+1,e,i,value,c+1);
    if((lvl-c)%2==1)tree[node]=(tree[left]|tree[right]);
    else tree[node]=(tree[left]^tree[right]);
    return;
}
int main()
{
    int x,q,y,a,b;
    cin>>lvl>>q;
    n=pow(lvl);

    for(int i=1;i<=n;i++)
        cin>>ara[i];
    init(1,1,n,0);
    while(q--){
        scanf("%d %d",&a,&b);
        update(1,1,n,a,b,0);
        printf("%d\n",tree[1]);
    }
}
