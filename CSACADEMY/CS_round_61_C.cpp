#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int ara[100010],sum[100010];
map<int,pii>input;
int main()
{
    int n,m,l,r,count=0;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=m;i++){
        scanf("%d %d",&l,&r);
        input[i]=pii(l,r);
        ara[l]+=1;
        ara[r+1]-=1;
    }
    for(int i=1;i<=n;i++){
        sum[i]=sum[i-1]+ara[i];
        if(sum[i]==0)count++;
    }
    for(int i=1;i<=n;i++){
        if(sum[i]>1)sum[i]=0;
        ara[i]=ara[i-1]+sum[i];
    }

    for(int i=1;i<=m;i++){
        cout<<ara[input[i].second]-ara[input[i].first-1]+count<<endl;
    }
}
