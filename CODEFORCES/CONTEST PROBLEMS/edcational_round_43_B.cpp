#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    lli n,m,k;
    cin>>n>>m;
    while(cin>>k){
    if(k<n){
        cout<<k+1<<' '<<1<<endl;
    }
    else{
        k=k-n+1;
        lli mm=m-1;
        lli r=ceil(double(k)/double(mm));
        lli c=k%(mm);
        //cout<<k<<' '<<r<<' '<<c<<endl;
        cout<<n-r+1<<' ';
        if(r%2!=0){
            if(c==0)cout<<m<<endl;
            else cout<<c+1<<endl;
        }
        else{
            if(c==0)cout<<2<<endl;
            else cout<<m-c+1<<endl;
        }
    }
    }
}
