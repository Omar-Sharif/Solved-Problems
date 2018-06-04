#include<bits/stdc++.h>
using namespace std;

int ara[200010],diff[200010];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ara[i];

    for(int i=1;i<=n;i++)diff[i]=100000000;

    int value=-1;
    for(int i=1;i<=n;i++){
        if(ara[i]==0)value=i;
        if(value==-1)continue;
        diff[i]=min(diff[i],abs(value-i));
    }
    value=-1;
    for(int i=n;i>=1;i--){
        if(ara[i]==0)value=i;
        if(value==-1)continue;
        diff[i]=min(diff[i],abs(value-i));
    }

    for(int i=1;i<=n;i++)
        cout<<diff[i]<<' ';

}
