#include<bits/stdc++.h>
using namespace std;

int sum[110],ara[110];
vector<int>ans;
int main()
{
    int n,m;
    while(cin>>n>>m){
        for(int i=1;i<=n;i++)
            cin>>ara[i];

        for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+ara[i];
        }
        int x,y;
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            int v=sum[y]-sum[x-1];
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        int q=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]>0)q+=ans[i];
        }
        cout<<q<<endl;

    }
}
