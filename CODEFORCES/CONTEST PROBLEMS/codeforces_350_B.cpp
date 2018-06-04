#include<bits/stdc++.h>
using namespace std;
#define lli long long
lli ara[100010];
lli ara1[100010];
int main()
{
    long long n,k,x;
    while(cin>>n>>k){
        for(lli i=0;i<n;i++){
           cin>>ara[i];
        }
        long long ans;
        for(lli i=1;i<=n+5;i++){
            ara1[i]=(i*(i+1))/2;
        }
        for(lli i=1;i<=n;i++){
            if(k<ara1[i]){
                ans=k-ara1[i-1];
                if(ans==0)ans=i-1;
                break;
            }
            if(i==n){
                ans=n;
            }
        }
        cout<<ara[ans-1]<<endl;
    }
}

