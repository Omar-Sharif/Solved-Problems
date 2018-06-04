#include<bits/stdc++.h>
using namespace std;

long ara[20010];
long ara1[15];

int main()
{
    long  n,m;
    cin>>n>>m;
    long count=0,i,j;
    for(i=1;i<=n;i++){
        cin>>ara[i];
        ara1[ara[i]]++;
    }

    for(int i=1;i<n;i++){
        ara1[ara[i]]--;
        cout<<ara1[ara[i]]<<endl;
        count+=n-(i+ara1[ara[i]]);
    }
    cout<<count<<endl;
}
