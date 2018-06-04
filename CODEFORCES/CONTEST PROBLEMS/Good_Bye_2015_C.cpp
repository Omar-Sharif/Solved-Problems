#include<bits/stdc++.h>
using namespace std;

char ara[505][505];
int row[505][505],col[505][505],n,m,k,x1,x2,y,y2;

void check()
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(ara[i][j]=='.' and ara[i][j-1]=='.')
                row[i][j]=row[i][j-1]+1;
            else row[i][j]=row[i][j-1];
        }
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(ara[j][i]=='.' and ara[j-1][i]=='.')
                col[j][i]=col[j-1][i]+1;
            else col[j][i]=col[j-1][i];
        }
    }
}
int check2()
{
    int count=0;
    for(int i=x1;i<=x2;i++)
        count+=row[i][y2]-row[i][y];

    for(int i=y;i<=y2;i++)
        count+=col[x2][i]-col[x1][i];

    cout<<count<<endl;
}
int main()
{
    while(cin>>n>>m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                cin>>ara[i][j];
        }
        check();
        cin>>k;
        while(k--){
            scanf("%d %d %d %d",&x1,&y,&x2,&y2);
            check2();
        }
    }
}
