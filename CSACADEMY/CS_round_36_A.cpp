#include<bits/stdc++.h>
using namespace std;

#define lli long long
int main()
{
    int n,x,y,z,mx=1000000000;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y>>z;
        mx=min(mx,max(x,y)+z);
    }
    cout<<mx<<endl;
}
