#include<bits/stdc++.h>
using namespace std;
int ara[55][55],value[55];
int main()
{
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>ara[i][j];
            }
        }
        memset(value,0,sizeof(value));
        for(int i=1;i<n;i++){
            int mi=max(ara[i][i+1],value[i]);
                value[i]=mi;
            for(int j=i+1;j<=n;j++){
                if(ara[i][j]==mi and value[j]<mi){
                    value[j]=mi+1;
                    ara[i][j]=value[j];
                    //cout<<j<<' '<<value[j]<<endl;
                }
                if(ara[i][j]<mi)value[j]=ara[i][j];
            }
        }
        for(int i=1;i<=n;i++){
                if(i==n)cout<<value[i]<<endl;
                else cout<<value[i]<<' ';
        }
    }
}

