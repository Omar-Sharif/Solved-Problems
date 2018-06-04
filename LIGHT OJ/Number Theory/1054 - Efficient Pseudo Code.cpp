#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
#define mod 1000000007
vector<int>v;
bool vis[mx];

void seive()
{
    vis[1]=1;
    for(int i=2;i<mx;i+=2)vis[i]=1;

    for(int i=3;i<=sqrt(mx);i+=2){
        if(vis[i]==1)continue;
        for(int j=i*i;j<mx;j+=2*i){
            vis[j]=1;
        }
    }
    v.push_back(2);

    for(int i=3;i<mx;i+=2){
        if(vis[i]==0)v.push_back(i);
    }
}

lli big_mod(lli a,lli b,lli m)
{
    if(b==0)return 1;
    if(b%2==0){
        lli x=big_mod(a,b/2,m);
        return (x*x)%m;
    }
    return (a%m*big_mod(a,b-1,m))%m;
}

int main()
{
    seive();
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        lli n,m;
        scanf("%lld %lld",&n,&m);

        lli sum=1;
        for(int i=0;v[i]<=sqrt(n);i++){
            if(n%v[i]==0){
                lli count=0;
                while(n%v[i]==0){
                    count++;
                    n/=v[i];
                }
                count*=m;
                lli x=big_mod((lli)v[i],count+1,mod);
                lli y=((x-1)*big_mod((lli)v[i]-1,mod-2,mod))%mod;
                sum=(sum*y)%mod;
            }
        }
        if(n!=1){
            lli x=big_mod((lli)n,m+1,mod);
            lli y=((x-1)*big_mod((lli)n-1,mod-2,mod))%mod;
            sum=(sum*y)%mod;
        }
        if(sum<0)sum+=mod;

        printf("Case %d: %lld\n",++cs,sum);
    }
}
