#include<bits/stdc++.h>
using namespace std;
int ara[510][510];
int main()
{
    int m,n,q;
    while(cin>>n>>m>>q){
    memset(ara,0,sizeof(ara));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>ara[i][j];
            }
        }

        int count=0,g,r,max=0,max1;
        for(int u=1;u<=q;u++){
            cin>>g>>r;
            max1=0;
            if(ara[g][r]==0)
                ara[g][r]=1;
            else if(ara[g][r]==1)
                ara[g][r]=0;
            for(int i=1;i<=n;i++){
                    count=0;
                    max=0;
                for(int j=1;j<=m;j++){
                    if(ara[i][j]==1)
                        count++;
                    else
                        count=0;
                 if(count>max)
                    max=count;
                }
                if(max>max1)
                    max1=max;
            }
            cout<<max1<<endl;
        }
    }
    return 0;
}
