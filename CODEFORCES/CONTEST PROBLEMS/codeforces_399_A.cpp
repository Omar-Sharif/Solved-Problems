#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
lli ara[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    lli a=ara[0],count=0;
    for(int i=0;i<n;i++){
        if(ara[i]==a)count++;
    }
   // cout<<count<<endl;
    int b=ara[n-1];
    for(int i=n-1;i>=0;i--){
        if(ara[i]==b)count++;
    }
    //cout<<count<<endl;
    n=n-count;

    if(n<0)n=0;
    cout<<n<<endl;
}
