#include<bits/stdc++.h>
using namespace std;

#define mx 200010
#define lli long long
#define inf 1e12
lli ara[mx],ara1[mx],n,m,ans1,ans2,mxx;
vector<lli>v;

lli check(lli value)
{
    lli l=0,h=n,aa=0,mid,p1,p2;
    while(l<=h){
        mid=(l+h)/2;
        if(ara[mid]<=value){
            aa=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    p1=aa*2+(n-aa)*3;

    l=0,h=m,aa=0;
    while(l<=h){
        mid=(l+h)/2;
        if(ara1[mid]<=value){
            aa=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    p2=(aa*2)+(m-aa)*3;

    if(p1-p2>mxx){
        ans1=p1;
        ans2=p2;
        mxx=p1-p2;
    }
}
int main()
{
    v.push_back(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
        v.push_back(ara[i]);
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>ara1[i];
        v.push_back(ara1[i]);
    }
    sort(v.begin(),v.end());
    sort(ara+1,ara+n+1);
    sort(ara1,ara1+m+1);

    mxx=-1000000000;
    for(int i=0;i<v.size();i++){
        check(v[i]);
    }

    cout<<ans1<<':'<<ans2<<endl;
}
