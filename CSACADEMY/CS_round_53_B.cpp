#include<bits/stdc++.h>
using namespace std;

int ara[100010];

int main()
{
    int n,c=0,c1=0,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>ara[i];

    ans=0,c=0;
    for(int i=1;i<n;i++){
        if(ara[i]<=ara[i+1]){
            c++;
        }
        else{
            ans=max(ans,c+1);
            c=0;
        }
    }
    ans=max(ans,c+1);c=0;
    //cout<<ans<<endl;
    for(int i=1;i<n;i++){
        if(ara[i]>=ara[i+1]){
            c++;
        }
        else{
            ans=max(ans,c+1);
            c=0;
        }
    }
    ans=max(ans,c+1);c=0;
    cout<<ans<<endl;
}
