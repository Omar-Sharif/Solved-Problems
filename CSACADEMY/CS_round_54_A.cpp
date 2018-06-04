#include<bits/stdc++.h>
using namespace std;
int ara[110];

int main()
{
    int n,a,b,k,sum=0;;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    sort(ara+1,ara+n+1);

    for(int i=1;i<=k;i++)sum+=ara[i];
    cout<<ceil(sum/100.00)<<endl;
}

