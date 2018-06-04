#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 300010
#define mod 1000000007

lli ara[mx];

lli bigmod(lli b,lli p)
{
    if(p==0)return 1;
    lli k=bigmod(b,p/2);
    k=(k*k)%mod;
    if(p%2==0)return k;
    else return (k*b)%mod;
}
int main()
{
    lli n,s=0,s1=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);

    for(lli i=0;i<n;i++){
        s=(s+bigmod(2,i)*ara[i])%mod;
        s1=(s1+bigmod(2,n-i-1)*ara[i])%mod;
    }
    sum=(mod+s-s1)%mod;
    cout<<sum<<endl;
}
