#include<bits/stdc++.h>
using namespace std;

struct st
{
    int v,x;
}ara[200010],ara1[200010];
int value[200010];
bool cmp(st a,st b)
{
    return a.v<b.v;
}
int optimal(int n)
{
    int  l=0,h=n-1,ans=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(ara[mid].v<ara[n].v){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
   // cout<<ara[n].x<<' '<<ans<<endl;
    value[ara[n].x]=ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>ara[i].v;
        ara[i].x=i;
        ara1[i]=ara[i];
    }
    sort(ara+1,ara+n+1,cmp);

    for(int i=1;i<=n;i++){
        optimal(i);
    }
    int x,y;
    for(int i=1;i<=k;i++){
        scanf("%d %d",&x,&y);
        if(ara1[x].v<ara1[y].v)value[y]-=1;
        if(ara1[x].v>ara1[y].v)value[x]-=1;
    }
    for(int i=1;i<=n;i++)
        cout<<max(0,value[i])<<' ';
}
