#include<bits/stdc++.h>
using namespace std;

struct st
{
    int l,r,index;
}ara[300010];

bool cmp(st a,st b)
{
    if(a.l<b.l)return true;
    else if(a.l==b.l){
        if(a.r<b.r)return true;
        else return false;
    }
    else return false;
}
int main()
{
        int n,ll,rr,ansi=-1,ansj=-1;
        cin>>n;
        for(int i=1;i<=n;i++){
            scanf("%d %d",&ll,&rr);
            ara[i].l=ll,ara[i].r=rr,ara[i].index=i;
        }

        sort(ara+1,ara+n+1,cmp);
        for(int i=1;i<n;i++){
            ll=ara[i+1].l;rr=ara[i+1].r;
            if(ll>=ara[i].l and rr<=ara[i].r){
                ansi=ara[i+1].index;
                ansj=ara[i].index;
                break;
            }
            else if(ara[i].l>=ll and ara[i].r<=rr){
                 ansi=ara[i].index;
                ansj=ara[i+1].index;
            }
        }
        cout<<ansi<<' '<<ansj<<endl;


}
