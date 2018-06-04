#include<bits/stdc++.h>
using namespace std;

int sum[200010];

int main()
{
    int n,m,x,v;
    while(cin>>n>>m){
        for(int i=1;i<=n;i++){
            cin>>x;
            sum[i]=sum[i-1]+x;
        }
        int mx=1000000000,ans;

        for(int i=1;i<=n-m+1;i++){
            v=sum[i+m-1]-sum[i-1];
           // cout<<v<<' '<<mx<<endl;
            if(v<mx){
                ans=i;
                mx=v;
            }
        }
        cout<<ans<<endl;
    }
}
