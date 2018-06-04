#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int ara[mx],my[mx];
int seive()
{
    ara[1]=1;
    for(int i=4;i<=mx;i+=2)ara[i]=1;
    for(int i=3;i<=sqrt(mx);i+=2){
        if(ara[i]!=0)continue;
        for(int j=i*i;j<=mx;j+=2*i){
            ara[j]=1;
        }
    }
}
int main()
{
    seive();

    int n;
    cin>>n;
    int mxx=0;
    for(int i=2;i<=n+1;i++){
        if(ara[i]==0)my[i]=1;
        else my[i]=2;
        mxx=max(mxx,my[i]);
    }

    cout<<mxx<<endl;
    for(int i=2;i<=n+1;i++){
        cout<<my[i]<<' ';
    }
}

