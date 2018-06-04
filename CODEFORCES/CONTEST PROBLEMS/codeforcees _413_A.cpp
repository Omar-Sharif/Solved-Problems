#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int main()
{
    int n,t,k,d,sum=0;
    cin>>n>>t>>k>>d;
    int x=ceil(double(n)/double(k));
    int v=(x*t);
    int z=(v/2)+d;
    cout<<v<<' '<<z<<endl;
    if(v>z)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

