#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    lli n,k,d1,d2,a,b,c,t;
    cin>>t;
    while(t--){
        cin>>n>>k>>d1>>d2;
        a=d1+d2;
        c=3-(a%3);
        b=(n-k)%3;
        if(a==b or b==c)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
