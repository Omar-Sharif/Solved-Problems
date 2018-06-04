#include<bits/stdc++.h>
using namespace std;

#define lli long long

lli ara[100010];

int main()
{
    lli n,k,w,h,mx=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>w>>h;
        mx=max(mx,ara[w]);
        cout<<mx<<endl;
        mx=mx+h;
    }
}
