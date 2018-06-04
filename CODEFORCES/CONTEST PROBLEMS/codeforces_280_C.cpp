#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define lli unsigned long long
vector<pii>v;

int cmp(pii a,pii b)
{
    if(a.second==b.second){
        return a.first<b.first;
    }
    else return a.second<b.second;
}
int main()
{
    lli n,r,avg,a,b,c,d,x,y,sum,sum1,count;

    while(cin>>n>>r>>avg)
    {
        avg=avg*n;
        sum=0;

        for(int i=0;i<n;i++){
            cin>>a>>b;
            sum+=a;
            v.push_back(pii(a,b));
        }

        if(sum>=avg){
            cout<<0<<endl;
        }
        else{
            x=avg-sum;
            //cout<<x<<endl;
            sort(v.begin(),v.end(),cmp);
            count=0;
            for(int i=0;i<v.size();i++){
               // cout<<v[i].first<<' '<<v[i].second<<endl;
                if(v[i].first>=r)continue;
                if(x==0)break;

                y=r-v[i].first;

                if(y<=x){
                  count+=y*v[i].second;
                  x=x-y;
                }
                else{
                    count+=x*v[i].second;
                    break;
                }
            }
            cout<<count<<endl;
        }
    }
}
