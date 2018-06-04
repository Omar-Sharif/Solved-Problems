#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define mx 100010
vector<int>v;

lli ara[mx],my[mx],sum[mx];

int main()
{
    int n;
    cin>>n;
    lli x;
    for(int  i=1;i<=n;i++){
        cin>>ara[i];
        sum[i]=ara[i]+sum[i-1];
    }

    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
        sort(v.begin(),v.end());
        int l=v.size();
        lli mxx=sum[v[0]-1]-sum[0],s;

        for(int j=1;j<l;j++){
            s=sum[v[j]-1]-sum[v[j-1]];
           // cout<<s<<' '<<mxx<<endl;
            mxx=max(s,mxx);
        }
   // cout<<mxx<<endl;
        mxx=max(mxx,sum[n]-sum[v[l-1]]);
        cout<<mxx<<endl;
    }
}

