#include<bits/stdc++.h>
using namespace std;

int ara[100],n;

int check(int x,int y)
{
    int sum=0;
    vector<int>v;
    for(int i=1;i<=n;i++){
        if(i==x or i==y)continue;
        v.push_back(ara[i]);
    }
    for(int i=1;i<v.size();i+=2){
        sum+=(v[i]-v[i-1]);
    }
   // cout<<x<<' '<<y<<' '<<sum<<endl;
    return sum;
}

int main()
{
    cin>>n;
    n*=2;
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    sort(ara+1,ara+n+1);
    int mx=100000000;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            mx=min(mx,check(i,j));
        }
    }
    cout<<mx<<endl;
}
