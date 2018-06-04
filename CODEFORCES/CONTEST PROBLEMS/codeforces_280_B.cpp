#include<bits/stdc++.h>
using namespace std;

int ara[1010];

int main()
{
    int n,l;
    cin>>n>>l;
    for(int i=1;i<=n;i++)cin>>ara[i];
    sort(ara+1,ara+n+1);

    double mn=max(ara[1],l-ara[n]);

    for(int i=1;i<n;i++){
        double x=(ara[i+1]-ara[i])/2.0;
        mn=max(mn,x);
    }
    printf("%.10lf\n",mn);
}
