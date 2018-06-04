#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>
vector<pii>v;

int main()
{
    long long mx=0,a,b,x,y,n,m,z,count;
    while(cin>>n>>m){
        int i,j;

        for(i=0;i<m;i++){
            cin>>a>>b;
            v.push_back(pii(a,b));
        }
        mx=v[0].second;
        int flag=0;
        for(i=1;i<v.size();i++){
            mx=max(mx,v[i].second);
            x=v[i-1].first; y=v[i].first;
            a=v[i-1].second; b=v[i].second;
            //cout<<a<<' '<<b<<' '<<x<<' '<<y<<endl;

            if(abs(a-b)>y-x){
                flag=1;
                break;
            }
            count=max(a,b)+((y-x)-abs(a-b))/2;
            //cout<<count<<endl;
            mx=max(mx,count);
        }
        z=v.size();
        z--;
        if(v[z].first!=n){
               // cout<<v[z].first<<' '<<v[z].second<<endl;
            count=n-v[z].first+v[z].second;
            //cout<<count<<endl;
            mx=max(mx,count);
        }
        if(v[0].first!=1){
            count=v[0].first-1+v[0].second;
            mx=max(mx,count);
        }
        if(flag==1)cout<<"IMPOSSIBLE"<<endl;
        else cout<<mx<<endl;
        v.clear();
    }
}
