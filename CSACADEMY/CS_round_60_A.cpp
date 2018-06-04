#include<bits/stdc++.h>
using namespace std;

double ara[110];
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) cin>>ara[i];

    sort(ara+1,ara+n+1);

    double sum=0;
    for(int i=2;i<n;i++)sum+=ara[i];
    sum=sum/(n-2);

    cout<<floor(sum)<<endl;
    return 0;
}
