#include<bits/stdc++.h>
using namespace std;

int ara[110],ara1[110];

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>ara[i];
        ara1[ara[i]]=i;
    }

    for(int i=1;i<=n;i++){
        if(i==n)cout<<ara1[i]<<endl;
        else cout<<ara1[i]<<' ';
    }
}
