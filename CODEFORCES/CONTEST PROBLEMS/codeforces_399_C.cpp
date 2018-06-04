#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int ara[mx];
int main()
{
    int n,k,x;

    cin>>n>>k>>x;
    for(int i=0;i<n;i++)cin>>ara[i];

    sort(ara,ara+n);
    if(k%2==0)cout<<ara[n-1]<<' '<<ara[0]<<endl;
    else{
        for(int i=0;i<n;i+=2){
            ara[i]=ara[i]^x;
            cout<<ara[i]<<endl;
        }
        sort(ara,ara+n);
        cout<<ara[n-1]<<' '<<ara[0]<<endl;
    }

}

