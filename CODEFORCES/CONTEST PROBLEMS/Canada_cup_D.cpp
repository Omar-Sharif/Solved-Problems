#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define mx 300010
lli T,W,pos;

struct st
{
    lli t,w,d,id;
}ara[mx];

struct mt
{
    lli d;
    mt(lli c){d=c;}
    bool operator <(const mt &p)const{return d>p.d;}
};

int cmp(st a,st b)
{
    if(a.t>b.t)return true;
    else if(a.t==b.t){
        if(a.id<b.id)return true;
        else return false;
    }
    else return false;
}

priority_queue<mt>q;
vector<st>v;
lli check()
{
    lli c=0;
    while(!q.empty() and c<1){
        mt m=q.top();
        if(T>=m.d)T-=m.d;
        else break;
        q.pop();
        c++;
    }
}

int main()
{
    lli n;
    cin>>n;
    lli i,j,k;
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&ara[i].t,&ara[i].w);
        ara[i].d=ara[i].w-ara[i].t+1;ara[i].id=i;
    }

    T=ara[1].t;W=ara[1].w;
    sort(ara+1,ara+n+1,cmp);
    lli mn=0,a,b,c,x,l=0;

    for(i=1;i<=n;i++){
        if(ara[i].t==T and mn==0){
            mn=i;
        }
        else v.push_back(ara[i]);
    }

    i=0;
    int f=1;
    while(i<v.size() and v[i].t>T){
        q.push(mt(v[i].d));
        i++;
    }
    while(f or (!q.empty() and q.top().d<=T)){
        f=0;
        check();
        while(i<v.size() and v[i].t>T){
            q.push(mt(v[i].d));
            i++;
            f=1;
        }
        mn=min(mn,(lli)q.size()+1);
    }
    cout<<mn<<endl;
}
