#include<bits/stdc++.h>
using namespace std;

int ara[510][510];
map<int,int>my;

int main()
{
    int n,m,q;

    while(cin>>n>>m>>q)
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>ara[i][j];
        }

        for(int i=1;i<=n;i++){
            int a=0,c=0;
            for(int j=1;j<=m;j++){
                if(ara[i][j]==0){
                    a=max(a,c);
                    c=0;
                }
                if(ara[i][j]==1)c++;
            }
            a=max(a,c);
            my[i]=a;
        }
        int x,y;
        for(int i=1;i<=q;i++){
            cin>>x>>y;
            ara[x][y]^=1;

            int a=0,c=0;
            for(int j=1;j<=m;j++){
                //cout<<ara[x][j]<<' ';
                if(ara[x][j]==0){
                    a=max(a,c);
                    c=0;
                }
                if(ara[x][j]==1)c++;
            }
            a=max(a,c);
           // cout<<a<<endl;
            my[x]=a;
            int mx=0;
            for(int i=1;i<=n;i++)mx=max(mx,my[i]);
            cout<<mx<<endl;
        }
    }
}
