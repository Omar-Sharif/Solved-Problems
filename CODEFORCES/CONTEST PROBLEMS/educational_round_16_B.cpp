#include<bits/stdc++.h>
using namespace std;

#define mx 300010
long long ara[mx],n,x,value,ans;

int main()
{
    while(cin>>n){
        for(int i=1;i<=n;i++)cin>>ara[i];
        sort(ara+1,ara+n+1);
        ans=(n+1)/2;
        cout<<ara[ans]<<endl;
    }
}
