#include<bits/stdc++.h>
using namespace std;
#define mx 100010
int ara[mx][70],n;
int my[70];

int bi(int l)
{
    int low=l,high=n,mid,ans=10000000,flag=0;

    while(low<=high)
    {
        mid=(low+high)/2;
      //  cout<<"value "<<low<<' '<<high<<' '<<mid<<endl;
        flag=0;
        for(int i=1;i<65;i++){
            if(my[i]==0)continue;
            //cout<<i<<' '<<ara[mid][i]-ara[l-1][i]<<endl;
            if(ara[mid][i]-ara[l-1][i]==0){
                flag=1;
                break;
            }
        }
        if(flag==1)low=mid+1;
        else{
                //cout<<flag<<' '<<mid<<' '<<l<<' ';
            ans=mid-l+1;
       // cout<<ans<<endl;
            high=mid-1;
        }
        flag=0;
    }
    return ans;
}
int main()
{
    int x;
    string s;
    while(cin>>n){
        cin>>s;

        for(int i=1;i<=n;i++){
            x=s[i-1]-64;
            my[x]=1;
            for(int j=1;j<65;j++)
                ara[i][j]=ara[i-1][j];

            ara[i][x]++;
        }
        int ans=10000000;
        for(int i=1;i<=n;i++){
                ans=min(ans,bi(i));
        }
        cout<<ans<<endl;
    }
}
