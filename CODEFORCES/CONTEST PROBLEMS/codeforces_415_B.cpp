#include<bits/stdc++.h>
using namespace std;
#define lli long long

lli ara[100010];
vector<lli>v;

int main()
{
    lli n,f,k,l,m,sum=0;
    cin>>n>>f;

    for(int i=0;i<n;i++){
        cin>>k>>l;
        sum+=min(k,l);
        if(k<l){
            if(2*k<=l) m=k;
            else m=l-k;
            v.push_back(m*-1);
        }
    }

    sort(v.begin(),v.end());
    for(int i=0;i<f and i<v.size();i++)
        sum+=(-1)*v[i];
    cout<<sum<<endl;
}
