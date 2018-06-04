#include<bits/stdc++.h>
using namespace std;

#define mx 200010
#define lli long long

map<int,int>my;
map<int,lli>ara;
lli cap[mx];

int check(int x,lli v,int n)
{
    lli a,b,c;
    for(int i=x;i<=n and v>0;i++){
        if(ara[i]==cap[i]){
            i=my[i]; c=my[i];
            if(cap[i]!=ara[i])i=my[i]-1;
            continue;
        }
        a=cap[i]-ara[i];
        if(a<=v){
            ara[i]=cap[i];
            v-=a;
        }
        else{
            ara[i]+=v;
            v=0;
        }
        c=i;
    }
    for(int i=c;i>=x;i--){
        my[i]=my[c];
    }
    return 0;
}

int main()
{
    int n,m,x,u;
    lli v;
    while(cin>>n){
        for(int i=1;i<=n;i++)cin>>cap[i];
        cin>>m;
        for(int i=1;i<=n;i++)my[i]=i;

        while(m--){
            scanf("%d",&x);
            if(x==1){
                scanf("%d %I64D",&u,&v);
                x=my[u];
                check(x,v,n);
            }
            else{
                scanf("%d",&u);
                cout<<ara[u]<<endl;
            }
        }
    }
}
