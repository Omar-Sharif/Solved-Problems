#include<bits/stdc++.h>
using namespace std;
#define mx 100010

int sum[mx][3],n,k;
string s;

int bi(int i)
{
    int low=i,high=n,mid,ans=0,ans1=0,x;
    while(low<=high)
    {
        mid=(low+high)/2;
        x=sum[mid][2]-sum[i-1][2];
        if(x<=k){
            ans=mid-i+1;
            low=mid+1;
        }
        else high=mid-1;
    }
    low=i,high=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        x=sum[mid][1]-sum[i-1][1];
        if(x<=k){
            ans1=mid-i+1;
            low=mid+1;
        }
        else high=mid-1;
    }
    ans=max(ans,ans1);
    return ans;
}
int main()
{
    while(cin>>n>>k){
        cin>>s;
        int c=0,c1=0;

        for(int i=1;i<=n;i++){
            if(s[i-1]=='a')c++;
            else c1++;
            sum[i][1]=c;
            sum[i][2]=c1;
        }

        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans,bi(i));
        }
        cout<<ans<<endl;
    }
}
