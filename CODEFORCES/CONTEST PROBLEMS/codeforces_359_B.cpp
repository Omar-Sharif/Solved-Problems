#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
vector<pii>v;
long long ara[110],n;
int mi,mx;

int func()
{
    for(int i=1;i<n;i++){
        if(ara[i]>ara[i+1]){
           // cout<<i<<' '<<i+1<<endl;
            swap(ara[i],ara[i+1]);
            v.push_back(pii(i,i+1));
            func();
        }
    }
    return 0;
}
int main()
{
    while(cin>>n){
        for(int i=1;i<=n;i++)cin>>ara[i];
        mi=1,mx=1;
        func();
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<' '<<v[i].second<<endl;
        }
        v.clear();
    }
}
