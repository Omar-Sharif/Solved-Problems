#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,mn=110,ans=0;
    for(int i=1;i<=3;i++){
        mn=110;
        for(int j=1;j<=3;j++){
            cin>>x;
            mn=min(mn,x);
        }
        ans+=mn;
    }
    cout<<ans<<endl;
}
