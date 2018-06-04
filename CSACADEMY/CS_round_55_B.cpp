#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,k,b;
    cin>>n>>r>>k;
    b=n-r;
    if(k<=r)cout<<r-k<<' ';
    else cout<<k-r<<' ';
    if(k<=b)cout<<r+k<<endl;
    else cout<<n-(k-b)<<endl;
}

