#include<bits/stdc++.h>
using namespace std;

struct st
{
    int l,r,p;
}ara[200010];
bool cmp(st a,st b)
{
    if(a.l<b.l)return true;
    else if(a.l==b.l){
        if(a.r>b.r)return true;
        else return false;
    }
    else return false;
}
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        ara[i].l=x,ara[i].r=y,ara[i].p=i;
    }
    sort(ara+1,ara+n+1,cmp);

   // for(int i=1;i<=n;i++)cout<<ara[i].l<<' '<<ara[i].r<<' '<<ara[i].p<<endl;
    if(n==1)cout<<-1<<endl;
    else if(n==2){
        if(ara[2].r<=ara[1].r)cout<<ara[2].p<<endl;
        else cout<<-1<<endl;
    }
    else{
        int ans=-1;
        for(int i=2;i<n;i++){
            int y=ara[i-1].r,yy=ara[i+1].l;
            if(yy<=y+1){
                ans=ara[i].p;
                break;
            }
        }
        cout<<ans<<endl;
    }

}
