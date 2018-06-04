#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k,d=0;
    cin>>n>>k;
    if(2*n-k-2>(n*(n-1)/2))cout<<-1<<endl;
    else{
        int c=1;
        cout<<2*n-k-2<<endl;
        for(int i=1;i<n;i++){
            cout<<i<<' '<<i+1<<' '<<c<<endl;
            d++;
            c++;
        }
        for(int i=3;i<=n;i++){
            cout<<1<<' '<<i<<' '<<c<<endl;
            c++;
            d++;
        }
       if(d<2*n-k-2)cout<<2<<' '<<n<<' '<<c<<endl;
    }
}


