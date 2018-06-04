#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli in[100][100];

int main()
{
    lli n,m,sum=0;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin>>in[i][j];
    }

    lli c0,c1,v;
    for(int i=1;i<=n;i++){
        c0=0,c1=0,v=1;
        for(int j=1;j<=m;j++){
            if(in[i][j]==0)c0++;
            else c1++;
        }
        while(c0>0){
            v*=2;
            c0--;
        }
        sum+=v-1;v=1;
        while(c1>0){
            v*=2;
            c1--;
        }
        sum+=v-1;v=1;
    }

    for(int i=1;i<=m;i++){
        c0=0,c1=0,v=1;
        for(int j=1;j<=n;j++){
            if(in[j][i]==0)c0++;
            else c1++;
        }
        while(c0>0){
            v*=2;
            c0--;
        }
        sum+=v-1;v=1;
        while(c1>0){
            v*=2;
            c1--;
        }
        sum+=v-1;v=1;
    }
    sum-=n*m;
    cout<<sum<<endl;
}
