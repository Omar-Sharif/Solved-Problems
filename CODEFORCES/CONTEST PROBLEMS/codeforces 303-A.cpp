#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int ara1[n+1];
        int ara[n+1][n+1];

        memset(ara1,0,sizeof(ara1));
        int count=0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>ara[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    if(ara[i][j]==1){
                        ara1[i]=1;
                    }
                    else if(ara[i][j]==2){
                        ara1[j]=1;
                    }
                    else if(ara[i][j]==3){
                        ara1[i]=1;
                        ara1[j]=1;
                    }
            }
        }
        for(int i=1;i<=n;i++){
            if(ara1[i]==0)
                count++;
        }
        cout<<count<<endl;
        for(int i=1;i<=n;i++){
            if(ara1[i]==0&&i==n)
                cout<<i<<endl;
            else if(ara1[i]==0&&i!=n)
                cout<<i<<' ';
        }



    }
}
