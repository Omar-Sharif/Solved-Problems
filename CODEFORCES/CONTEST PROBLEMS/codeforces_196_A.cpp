#include<bits/stdc++.h>
using namespace std;

int ara[100];

int main()
{
    int n,m;
    while(cin>>m>>n){
        for(int i=1;i<=n;i++)cin>>ara[i];
        sort(ara+1,ara+n+1);

        int mx=100000,v;

        for(int i=1;i<=n-m+1;i++){
            v=ara[i+m-1]-ara[i];
            mx=min(mx,v);
        }
        cout<<mx<<endl;
    }
}
