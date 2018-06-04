#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        if(n%3==0){
            lli x=n/3;
            cout<<x<<' '<<x<<' '<<x<<endl;
        }
        else if(n%2==0){
            lli x=n/2;
            if(x%2==0)cout<<x<<' '<<x/2<<' '<<x/2<<endl;
            else cout<<"IMPOSSIBLE"<<endl;
        }
        else cout<<"IMPOSSIBLE"<<endl;
    }
}
