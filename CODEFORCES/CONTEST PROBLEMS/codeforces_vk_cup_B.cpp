#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        int flag=0,a=1,b=n,x,y,s,d;
        for(int i=1;i<=m;i++){
            cin>>x>>y;

            s=min(x,y);
            d=max(x,y);
            a=max(a,s);
            b=min(b,d);
        }
       // cout<<a<<' '<<b<<endl;
        long long ans=0;
        if(a>=b)cout<<0<<endl;
        else{
            ans=b-a-1;
            cout<<ans+1<<endl;
        }
    }
}
