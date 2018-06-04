#include<bits/stdc++.h>
using namespace std;

int dp[110][2010],dir[110][2010];
int n,sum;
vector<int>s;

struct st
{
    int t,d,v,p;
}ara[110];

bool cmp(st a,st b)
{
    if(a.d<b.d)return true;
    else if(a.d==b.d){
        if(a.v>b.v)return true;
        else if(a.v==b.v){
            if(a.t<b.t)return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

int optimal(int i,int tt)
{
    if(i>n)return 0;
    if(dp[i][tt]!=-1)return dp[i][tt];
    int ret1=-1,ret2=-1;
    if(tt+ara[i].t<ara[i].d)ret1=ara[i].v+optimal(i+1,tt+ara[i].t);
    ret2=optimal(i+1,tt);
    if(ret1>ret2)dir[i][tt]=1;
    else dir[i][tt]=0;
    //cout<<"SS "<<i<<' '<<tt<<' '<<ret1<<' '<<ret2<<endl;
    return dp[i][tt]=max(ret1,ret2);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ara[i].t>>ara[i].d>>ara[i].v;
        ara[i].p=i;
    }

    sort(ara+1,ara+n+1,cmp);
    memset(dp,-1,sizeof dp);
    sum=optimal(1,0);
    int indx=0;

    for(int i=1;i<=n;i++){
        if(dir[i][indx]==1){
            s.push_back(ara[i].p);
            indx+=ara[i].t;
        }
    }

    cout<<sum<<endl<<s.size()<<endl;
    for(int i=0;i<s.size();i++)
        cout<<s[i]<<' ';

}
