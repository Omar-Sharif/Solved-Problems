#include<bits/stdc++.h>
using namespace std;

long long  ara[100010];

int main()
{
    long long n,x;
    long long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        sum+=x;
    }
    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    if(sum<=ara[n-1]+ara[n-2]){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
