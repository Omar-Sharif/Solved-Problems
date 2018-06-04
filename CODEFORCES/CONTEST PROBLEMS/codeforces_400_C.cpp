#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
map<lli,lli>my;
lli ara[mx],sum[mx],power[110];

vector<lli>v,v1;

lli po(lli x)
{
    lli ans=1;
    for(int i=1;i<=62;i++){
        ans*=x;
        power[i]=ans;
        if(x==1 and i>1) power[i]=10000000000000000;
    }
}

lli check(lli s)
{
    lli count=0;

    for(int i=1;i<=62;i++){
        lli x=power[i];
        count+=my[x+s];
    }
    return count;
}
int main()
{
    int n,k;
    cin>>n>>k;
    po(k);
    lli s=0,a,b,c;
    for(int i=1;i<=n;i++) cin>>ara[i];

    for(int i=1;i<=n;i++){
        s+=ara[i];
        sum[i]=s;
        my[sum[i]]++;
    }

    lli count=0;
    for(int i=1;i<=n;i++){
        s=sum[i-1];
        count+=check(s);
        my[sum[i]]--;
    }
    cout<<count<<endl;



}

