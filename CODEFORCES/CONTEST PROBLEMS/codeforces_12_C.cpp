#include<bits/stdc++.h>
using namespace std;

map<string,int>my;
map<string,int>vis;
vector<string>v;
vector<int>v1;

int ara[110];
int cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int n,m;
    string s;
    while(cin>>n>>m){
        for(int i=0;i<n;i++)cin>>ara[i];

        for(int i=0;i<m;i++){
            cin>>s;
            if(vis[s]==0)v.push_back(s);
            my[s]++;
            vis[s]=1;
        }

        for(int i=0;i<v.size();i++){
            s=v[i];
            v1.push_back(my[s]);
        }

        sort(ara,ara+n);
        sort(v1.begin(),v1.end(),cmp);

        int mx=0,mn=0;

        for(int i=0;i<v1.size();i++){
            mn+=v1[i]*ara[i];
        }

        sort(v1.begin(),v1.end());

        for(int i=n-v1.size(),j=0;i<n;i++){
            mx+=v1[j]*ara[i];
            j++;
        }

        cout<<mn<<' '<<mx<<endl;
    }
}
