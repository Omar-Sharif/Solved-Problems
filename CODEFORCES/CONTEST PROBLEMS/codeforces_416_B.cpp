#include<bits/stdc++.h>
using namespace std;

map<int,int>my;
int ara[10010];

int check(int l,int r,int x)
{
    int count=0;
    for(int i=l;i<=r;i++)
        if(ara[i]<x)count++;
    return count;
}
int main()
{
    int n,m,l,r,x;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        my[i]=ara[i];
    }

    for(int i=0;i<m;i++){
        scanf("%d %d %d",&l,&r,&x);
        int v=my[x];
        int c=check(l,r,v);
        if(c+l==x)printf("Yes\n");
        else printf("No\n");
    }
}
