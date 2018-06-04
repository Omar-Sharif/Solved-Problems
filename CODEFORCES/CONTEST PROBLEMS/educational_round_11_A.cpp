#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<int,bool>vis;
int main()
{
        int n,m;
        while(cin>>n>>m)
        {
            int a,b,c,d,value;
            value=2*n;
            for(int i=1;i<=m;i++){
                vis[i]=1;
            }

            for(int i=1;i<=n;i++){
                a=2*i-1;d=2*i;
                b=value+a;c=value+d;
                //cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
                if(vis[b]==1)v.push_back(b);
                if(vis[a]==1)v.push_back(a);
                if(vis[c]==1)v.push_back(c);
                if(vis[d]==1)v.push_back(d);
            }

            for(int i=0;i<v.size();i++){
                if(i==v.size()-1)cout<<v[i]<<endl;
                else cout<<v[i]<<' ';
            }
        }
}
