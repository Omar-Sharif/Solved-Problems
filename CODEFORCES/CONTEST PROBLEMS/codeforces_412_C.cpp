#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 1e18

int main()
{
    int t;
    lli x,y,p,q;
    cin>>t;
    while(t--){
        cin>>x>>y>>p>>q;

        lli low=0,high=(mx/q),mid,ans=-1;
        while(low<=high){
            mid=(low+high)/2;
            lli a=(p*mid)-x;
            lli b=(q*mid)-y;
            if(a<=b and a>=0){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }

        if(ans==-1)cout<<ans<<endl;
        else{
            cout<<q*ans-y<<endl;
        }
    }
}

