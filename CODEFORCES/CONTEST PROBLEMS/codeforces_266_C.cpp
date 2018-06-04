#include<bits/stdc++.h>
using namespace std;
#define mx 500010

long long ara[mx],sum[mx],n,x,n1,c;

int main()
{
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];

        for(int i=1;i<=n;i++)sum[i]=sum[i-1]+ara[i];
        if(sum[n]%3!=0)cout<<0<<endl;
        else{
            x=sum[n]/3;
            n1=0,c=0;
            for(int i=1;i<n;i++){
                if(sum[i]==2*x)c+=n1;
                if(sum[i]==x)n1++;
            }
            cout<<c<<endl;
        }
    }
}
