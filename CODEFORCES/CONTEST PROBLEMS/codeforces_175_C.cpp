#include<bits/stdc++.h>
using namespace std;
#define lli long long
vector<lli>v;

int main()
{
    lli n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    lli sum=0;

    for(int i=0;i<v.size();i++){
        sum+=abs((i+1)-v[i]);
    }
    cout<<sum<<endl;

}
