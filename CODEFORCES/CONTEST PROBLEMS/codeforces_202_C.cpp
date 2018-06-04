#include<bits/stdc++.h>
using namespace std;

long double x,n,sum,mx;

int main()
{
    while(cin>>n){
        sum=0,mx=0;
        for(int i=0;i<n;i++){
            cin>>x;
            mx=max(mx,x);
            sum+=x;
        }
        cout<<max(ceil(sum/(n-1)),mx)<<endl;
    }
}
