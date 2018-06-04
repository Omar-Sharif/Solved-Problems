#include<bits/stdc++.h>
using namespace std;

int x,n;
vector<int>v,ans;
int dp[12][11][1011];
int flag=0;
int optimal(int i,int lsum,int rsum,int c,int state)
{
  //  cout<<i<<' '<<v[i]<<' '<<lsum<<' '<<rsum<<' '<<c<<endl;
  //  cout<<dp[c][i][v[i]]<<endl;
   // if(dp[i][v[i]][c]!=-1)return dp[i][v[i]][c];
    if(c==n){
        ans.push_back(v[i]);
        flag=1;
        return 1;
    }

    int p=0,q=0;
    for(int j=0;j<x;j++){
        int a=v[j];
        if(j==i)continue;
        if(flag==1)continue;
        if(state==2){
            if(lsum+a>rsum)p=optimal(j,lsum+a,rsum,c+1,1);
        }
        else{
           if(lsum<rsum+a)q=optimal(j,lsum,rsum+a,c+1,2);
        }
    }
  //  cout<<i<<' '<<v[i]<<' '<<c<<' '<<p<<' '<<q<<endl;
    dp[i][v[i]][c]=max(p,q);
    if(dp[i][v[i]][c]==1)ans.push_back(v[i]);
    return dp[i][v[i]][c];
}
int main()
{
    string s;
    while(cin>>s){
        cin>>n;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')v.push_back(i+1);
        }

        x=v.size();
        memset(dp,-1,sizeof(dp));

        int y,p=0;
        for(int i=0;i<x;i++){
            y=v[i];
            p=optimal(i,y,0,1,1);
            flag=0;
            if(p==1)break;
            memset(dp,-1,sizeof(dp));
            ans.clear();
        }

       if(ans.size()==0)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
        reverse(ans.begin(),ans.end());

     for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';
     ans.clear();
    }
}

