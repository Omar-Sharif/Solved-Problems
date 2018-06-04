#include<bits/stdc++.h>
using namespace std;

long ara[1010];

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)cin>>ara[i];

    for(int i=2;i<=n;i++){
        if(i%2==0){
            if(ara[i]<ara[i-1])swap(ara[i],ara[i-1]);
        }
        else{
            if(ara[i]>ara[i-1])swap(ara[i],ara[i-1]);
        }
    }

    for(int i=1;i<=n;i++){
        if(i==n)cout<<ara[i]<<endl;
        else cout<<ara[i]<<' ';
    }
}
