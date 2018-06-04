#include<bits/stdc++.h>
using namespace std;

vector<int>v[110];
int check(int a,int b)
{
    int c=0;
    for(int i=0;i<v[a].size();i++){
        for(int j=0;j<v[b].size();j++){
            if(v[a][i]==v[b][j]){
                c++;
                break;
            }
        }
    }
   // cout<<a<<' '<<b<<' '<<c<<endl;
    return c;
}
int main()
{
    int n,m,x,y,ans=0,c;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>x;
        for(int j=0;j<x;j++){
            cin>>y;
            v[i].push_back(y);
        }
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            ans=max(ans,check(i,j));
        }
    }
    cout<<ans<<endl;
}
