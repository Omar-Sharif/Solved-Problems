#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[100010];

int main()
{
    lli n,k,x,s=0,mn=10000000000000;

    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>ara[i];
        mn=min(mn,ara[i]);
    }

    for(int i=0;i<n;i++){
        x=abs(ara[i]-mn);
        if((x%k)!=0){
            cout<<-1<<endl;
            return 0;
        }
        s+=(x/k);
    }
    cout<<s<<endl;
}
