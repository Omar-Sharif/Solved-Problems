#include<bits/stdc++.h>
using namespace std;
#define lli long long
vector<lli>v;

struct photo
{
    lli sum,pos;
}ara[100010];

int cmp(photo p,photo q)
{
    return p.sum<q.sum;
}

int main()
{
    lli n,d,a,b,x,y;

    while(cin>>n>>d)
    {
        cin>>a>>b;

        for(int i=1;i<=n;i++){
            cin>>x>>y;
            ara[i].sum=x*a+y*b;
            ara[i].pos=i;
        }

        sort(ara+1,ara+n+1,cmp);

        for(int i=1;i<=n;i++){
           // cout<<ara[i].sum<<endl;
            if(ara[i].sum<=d){
                v.push_back(ara[i].pos);
                d-=ara[i].sum;
            }
            else break;
        }

        cout<<v.size()<<endl;

        for(int i=0;i<v.size();i++){
            if(i==v.size()-1)cout<<v[i]<<endl;
            else cout<<v[i]<<' ';
        }
    }
}
