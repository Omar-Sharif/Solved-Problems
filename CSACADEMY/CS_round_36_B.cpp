#include<bits/stdc++.h>
using namespace std;

#define lli long long
int ara[100010],sum[100010];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        sum[i]=sum[i-1]+ara[i];
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(ara[i]==1)continue;
        int a=max(i-k-1,0);
        int b=min(i+k,n);
        //cout<<sum[i]<<' '<<sum[a]<<' '<<sum[b]<<' '<<sum[i-1]<<endl;
        int c=(sum[i]-sum[a])+(sum[b]-sum[i-1]);
        if(c<=1)count++;
    }
    cout<<count<<endl;
}

