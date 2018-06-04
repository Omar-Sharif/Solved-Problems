#include<bits/stdc++.h>
using namespace std;

int ara[1010][1010],row[1010],col[1010];

int main()
{
    int n,mx=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=n;j++){
            cin>>ara[i][j];
            sum+=ara[i][j];
        }
        row[i]=sum;
        mx=max(mx,sum);
    }
    //cout<<mx<<endl;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=n;j++){
            sum+=ara[j][i];
        }
        col[i]=sum;
        mx=max(mx,sum);
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int v=mx-row[i];
            int u=mx-col[j];
            ara[i][j]+=min(u,v);
            row[i]+=min(u,v);
            col[j]+=min(u,v);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<ara[i][j]<<' ';
        cout<<endl;
    }
}
