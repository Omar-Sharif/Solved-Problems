#include<bits/stdc++.h>
using namespace std;

#define mx 1010

int ara[mx][mx],value[mx];

int main()
{
    int n,m,x,y;
    while(cin>>n>>m){
        for(int i=1;i<=n;i++)
            scanf("%lld",&value[i]);

        for(int i=0;i<m;i++){
            scanf("%d %d",&x,&y);
            ara[x][y]=1;
            ara[y][x]=1;
        }
        long long sum=0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(ara[i][j]==1){
                    //cout<<value[i]<<' '<<value[j]<<endl;
                    sum+=min(value[i],value[j]);
                    ara[i][j]=0;
                    ara[j][i]=0;
                }
            }
        }
        cout<<sum<<endl;
    }
}
