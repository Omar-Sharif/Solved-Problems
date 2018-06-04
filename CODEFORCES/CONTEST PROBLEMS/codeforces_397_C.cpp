#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,a,b,c,d,count=0;
    cin>>k>>a>>b;
    count=(a/k)+(b/k);
    c=(a%k);d=(b%k);
    if(c!=0 and (b/k)==0)cout<<-1<<endl;
    else if(d!=0 and (a/k)==0)cout<<-1<<endl;
    else cout<<count<<endl;
}
