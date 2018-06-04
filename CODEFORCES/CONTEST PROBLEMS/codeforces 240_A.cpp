#include<bits/stdc++.h>
using namespace std;
int ara[110];
int main()
{
    memset(ara,-1,sizeof(ara));
    int n,m,k,j;
    cin>>n>>m;

    for(int i=1;i<=m;i++){
        cin>>k;
        for(int j=k;j<=n;j++){
            if(ara[j]==-1){
                ara[j]=k;
            }
            else break;
        }
    }

    for(int i=1;i<=n;i++){
        if(i==n)
            cout<<ara[i]<<endl;
        else cout<<ara[i]<<' ';
    }
}
