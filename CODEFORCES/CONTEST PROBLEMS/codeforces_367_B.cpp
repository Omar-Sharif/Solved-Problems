#include<bits/stdc++.h>
using namespace std;
long long ara[100010],n,q,m;

long long bi(long long m)
{
    long low=0,high=n,mid;
    mid=(low+high)/2;

    while(low<=high){
        mid=(low+high)/2;
    //cout<<low<<' '<<high<<' '<<mid<<endl;
        if(ara[mid]<=m)low=mid+1;
        else if(ara[mid]>m)high=mid-1;
        else{
            break;
        }
    }
    if(low>n)low=n;
    return low;
}
int main()
{
    while(cin>>n)
    {
        for(int i=0;i<n;i++)cin>>ara[i];
        cin>>q;
        sort(ara,ara+n);
        for(int i=0;i<q;i++){
            cin>>m;
            cout<<bi(m)<<endl;
        }
    }
}

