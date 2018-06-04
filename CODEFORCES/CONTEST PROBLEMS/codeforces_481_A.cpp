#include<bits/stdc++.h>
using namespace std;

int ara[100],vis[1010];

int main()
{
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i];
    }

    vector<int>v;
    for(int i=n;i>=1;i--){
        if(vis[ara[i]]==0){
            vis[ara[i]]=1;
            v.push_back(ara[i]);
        }
    }
    cout<<v.size()<<endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
}
