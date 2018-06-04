#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,sum=0;
    cin>>n>>s;

    int ara[n+1];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+n);

    if(sum-ara[n-1]<=s)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
