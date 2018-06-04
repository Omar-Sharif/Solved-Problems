#include<bits/stdc++.h>
#include<stdio.h>
#include<cstring>
using namespace std;
int ara[110];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,m;

    cin>>n>>m;

    for(int i=1;i<=n;i++)
        cin>>ara[i];
    sort(ara+1,ara+n+1,cmp);
    int sum=0,i;

    for(i=1;i<=n;i++){
        sum+=ara[i];
        if(sum>=m)
            break;
    }
    cout<<i<<endl;
}
