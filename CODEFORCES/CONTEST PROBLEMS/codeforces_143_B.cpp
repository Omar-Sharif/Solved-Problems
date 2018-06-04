#include<bits/stdc++.h>
using namespace std;
#define lli long long
lli ara[100010];
vector<lli>v;

int main()
{
    lli n,k;
    while(cin>>n>>k)
    {
        for(int i=0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);

        lli low=1,high=1000000100,mid,sum=0,c,count=0,value=0;

        while(low<high)
        {
            mid=(low+high)/2;
            for(int i=0;i<n;i++){
                if(ara[i]>mid)break;
                else v.push_back(mid-ara[i]);
            }
            sort(v.begin(),v.end());

            sum=0;c=0;

            for(int i=0;i<v.size();i++){
                if(sum+v[i]<=k){
                    c++;
                    sum+=v[i];
                }
                else break;
            }
          //  cout<<c<<' '<<count<<endl;
            if(c>count){
                value=mid;
                count=max(count,c);
               high=mid;
            }
            else if(c==count){
                count=max(count,c);
                if(mid<value)value=mid;
                high=mid;
            }
            else high=mid;
            v.clear();
            cout<<mid<<' '<<c<<endl;
        }
        cout<<low<<' '<<high<<' '<<count<<' '<<value<<endl;
    }
}
