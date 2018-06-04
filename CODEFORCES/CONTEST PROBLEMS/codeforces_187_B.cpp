#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
lli ara[mx];

int main()
{
    lli n,a,b,c,t,sum=0;
    cin>>n>>t;

    for(int i=1;i<=n;i++)cin>>ara[i];

    while(t--){
        cin>>a;
        if(a==1){
            cin>>b>>c;
            ara[b]=0;
            ara[b]=c-sum;
        }
        else if(a==2){
            cin>>b;
            sum+=b;
        }
        else{
            cin>>b;
            cout<<ara[b]+sum<<endl;
        }
    }
}
