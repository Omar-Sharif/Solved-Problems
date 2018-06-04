#include<bits/stdc++.h>
using namespace std;

int ara[100010],n;
int check(int l,int h,int value)
{
    int ans=h,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(ara[mid]*2>=value){
                h=mid-1;
                ans=mid;
        }
        else l=mid+1;
    }
    return ans;
}
int check2(int l,int h,int value)
{
    int ans=l,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(ara[mid]<=value*2){
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    return ans;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    sort(ara+1,ara+n+1);

    int mi1=100010,mi2=100010,s=0;
    for(int i=n;i>=1;i--){
        s=n-i;
        s+=check(1,i,ara[i])-1;
        mi1=min(mi1,s);
    }

    for(int i=1;i<=n;i++){
        s=i-1;
        s+=n-check2(i,n,ara[i]);
        mi2=min(mi2,s);
    }
    cout<<min(mi1,mi2)<<endl;
}
