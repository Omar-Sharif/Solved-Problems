#include<bits/stdc++.h>
using namespace std;

int vis[4010];
vector<int>v;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int a,c,b;
        memset(vis,0,sizeof(vis));

        for(int i=1;i<=k;i++){
            cin>>a;
            if(a==1){
                cin>>b>>c;
                vis[b]=1;
                vis[c]=1;
            }
            else{
                cin>>b;
                vis[b]=1;
            }
        }
        vis[n]=1;

        for(int i=1;i<=n;i++){
            if(vis[i]==0)v.push_back(i);
        }

        int mx=0,mi=0;
        mx=v.size();
        mi=v.size();
        c=0;
        int count=0;

        for(int i=0;i<v.size();i++){
           // cout<<v[i]<<' '<<v[i+1]<<endl;
            if(v[i]+1==v[i+1]){
                c++;
                i++;
                count++;
            }
            else{
                count++;
            }
        }
      //  cout<<count<<endl;
        mi=min(mi,count);
        cout<<mi<<' '<<mx<<endl;
        v.clear();
    }
}
