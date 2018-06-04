#include<bits/stdc++.h>
using namespace std;

long long ara[100010],ara1[100010],n;
#define ll 2000000000

long long cal(long long mid,long long k)
{
    long long a,b,c=1;
    //cout<<mid<<' '<<k<<endl;
    for(long long i=0;i<n;i++){
        if(mid*ara[i]<=ara1[i])continue;
        else{
            a=mid*ara[i]-ara1[i];
            if(k>=a)k=k-a;
            else{c=0;break;}
        }
    }
   // cout<<"c "<<c<<endl;
    return c;
}
long long binary_S(long long high,long long low,long long k)
{
    long long mid,x,ans=0;
    while(low<=high){
        mid=(low+high)/2;
        x=cal(mid,k);
        if(x==1){
          //  cout<<high<<' '<<low<<' '<<mid<<endl;
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<ans<<endl;
}

int main()
{
    long long k,a,b,c;
    while(cin>>n>>k)
    {
        for(int i=0;i<n;i++)cin>>ara[i];
        for(int i=0;i<n;i++)cin>>ara1[i];
        binary_S(ll,0,k);
    }
}
