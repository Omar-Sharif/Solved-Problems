#include<bits/stdc++.h>
using namespace std;

#define mx 200010
#define lli long long

int main()
{
    lli n;
    cin>>n;
    n=n+1;
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    else if(n%2==0){
        cout<<n/2<<endl;
    }
    else cout<<n<<endl;
}
