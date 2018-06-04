#include<bits/stdc++.h>
using namespace std;

#define lli long long
int main()
{
    lli a,s,k,x,y;
    cin>>a>>s>>k>>x>>y;

    lli l=0,h=k,mid,ans=-1;
    while(l<=h){
        mid=(l+h)/2;
        lli xx=a+(x*mid);
        lli yy=s+(y*(k-mid));
        if(xx<yy)l=mid+1;
        else if(xx>yy)h=mid-1;
        else{
            ans=mid;
            break;
        }
    }
    cout<<ans<<endl;
}
