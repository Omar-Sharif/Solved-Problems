#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int cnt[110];
bool vis[110];

void seive()
{
    vis[1]=1;
    for(int i=2;i<=50;i++){
        if(vis[i]==1)continue;
        for(int j=i*i;j<=100;j+=i){
            vis[j]=1;
        }
    }
    for(int i=2;i<=100;i++){
        if(vis[i]==0)v.push_back(i);
    }
}

void check(int x)
{
    for(int i=0;v[i]<=sqrt(x);i++){
        if(x%v[i]==0){
            int count=0;
            while(x%v[i]==0){
                count++;
                x/=v[i];
            }
            cnt[v[i]]+=count;
        }
    }
    if(x!=1)cnt[x]+=1;
}

int main()
{
    seive();
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);

        memset(cnt,0,sizeof cnt);
        for(int i=2;i<=n;i++){
            check(i);
        }

        vector<int>c;
        for(int i=0;i<v.size();i++){
            if(cnt[v[i]]==0)continue;
            c.push_back(v[i]);
        }

        printf("Case %d: %d =",++cs,n);
        for(int i=0;i<c.size();i++){
            if(i==c.size()-1)printf(" %d (%d)\n",c[i],cnt[c[i]]);
            else printf(" %d (%d) *",c[i],cnt[c[i]]);
        }
        c.clear();
    }
}
