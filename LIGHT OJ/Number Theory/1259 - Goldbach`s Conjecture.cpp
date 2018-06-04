#include<bits/stdc++.h>
using namespace std;

#define mx 10000010
vector<int>v;
bool vis[mx];

void seive()
{
    vis[1]=1;
    for(int i=4;i<=mx;i+=2)vis[i]=1;

    for(int i=3;i<=sqrt(mx);i+=2){
        if(vis[i]!=0)continue;
        for(int j=i*i;j<mx;j+=i*2){
            vis[j]=1;
        }
    }
    int count=0;
    for(int i=1;i<=mx;i++){
        if(vis[i])continue;
        v.push_back(i);
    }
}
int check(int value)
{
    int count=0;
    for(int i=0;v[i]<=(value/2);i++){
        int y=value-v[i];
        if(vis[y])continue;
        count++;
    }
    return count;
}
int main()
{
    seive();
    int t,x,cs=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        int y=check(x);
        printf("Case %d: %d\n",++cs,y);
    }
}

