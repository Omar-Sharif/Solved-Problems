#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

map<int,lli>v[mx],v1[mx],my;
int n,m,q,l,r;

int main()
{
    cin>>n>>m;
    lli x;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>v[i][j];

    lli mn,value;
    for(int j=1;j<=m;j++){
        mn=1 ;value=v[1][j];
        for(int i=1;i<=n;i++){
            if(value>v[i][j]) mn=i;
            value=v[i][j];
            v1[i][j]=mn;
        }
    }

    for(int i=1;i<=n;i++){
        mn=v1[i][1];
        for(int j=1;j<=m;j++)
            mn=min(mn,v1[i][j]);
        my[i]=mn;
    }

    cin>>q;
    while(q--){
        scanf("%d %d",&l,&r);
        if(l<my[r])printf("No\n");
        else printf("Yes\n");
    }


}

