#include<bits/stdc++.h>
using namespace std;

int ara[100010],n;
#define lli long long

int main()
{
    while(cin>>n){
        int ans=0;
        for(int i=1;i<=n;i++){
            cin>>ara[i];
            ans=max(ara[i],ans);
        }

        cout<<ans<<endl;
    }
}
