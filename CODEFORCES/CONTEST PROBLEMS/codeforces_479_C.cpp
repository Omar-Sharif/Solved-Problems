#include<bits/stdc++.h>
using namespace std;

int ara[200010];
int check(int n,int k)
{
    int ans=-1;
    int l=1,h=1000000000;
    while(l<=h){
        int mid=(l+h)/2;
        int count=0;
        for(int i=1;i<=n;i++){
            if(ara[i]<=mid)count++;
        }
        //cout<<l<<' '<<h<<' '<<count<<endl;
        if(count==k){
            ans=mid;
            break;
        }
        if(count<k)l=mid+1;
        else h=mid-1;
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }
    sort(ara+1,ara+n+1);
    int ans=check(n,k);
    cout<<ans<<endl;
}
