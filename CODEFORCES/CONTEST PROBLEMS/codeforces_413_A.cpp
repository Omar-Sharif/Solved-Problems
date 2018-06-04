#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int main()
{
    double n,t,d,k,x,y,z;
    cin>>n>>t>>k>>d;
    x=ceil(n/k)*t;
    n-=floor(d/t)*k;
    if(n<=0){
        cout<<"NO"<<endl;
        return 0;
    }
    y=d+(ceil(n/(2*k)))*t;
    if(y<x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


