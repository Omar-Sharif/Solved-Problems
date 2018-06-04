#include<bits/stdc++.h>
using namespace std;

int ara[100010],ara1[100010],ans[100010],n;

int main()
{
    cin>>n;

    for(int i=1;i<=n;i++)cin>>ara[i];
    for(int i=1;i<=n;i++)cin>>ara1[i];

    for(int i=1;i<n;i++){
        if(ara[i]<ara[i+1])ans[i]=0;
        else ans[i]=1;
    }
    if(ara1[n-1]==1)ans[n]=0;
    else ans[n]=1;

    for(int i=1;i<=n;i++)cout<<ans[i];
    cout<<endl;
}
