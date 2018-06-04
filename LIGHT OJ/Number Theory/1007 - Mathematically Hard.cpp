#include<bits/stdc++.h>
using namespace std;

#define mx 5000005
#define uli unsigned long long
bool vis[mx];
int sum1[mx];
uli sum[mx];

void seive()
{
    for(int i=2;i<mx;i++)sum1[i]=1;

    for(int i=2;i<=mx;i++){
        if(vis[i]==1)continue;

        for(int j=2*i;j<mx;j+=i){
            vis[j]=1;
            int x=j;
            sum1[j]*=(i-1);
            x=j/i;
            while(x%i==0){
                sum1[j]*=i;
                x/=i;
            }
        }
    }
    for(int i=2;i<mx;i++){
        if(vis[i]==0)sum1[i]=i-1;
    }
    for(int i=2;i<mx;i++){
        sum[i]=sum[i-1]+(uli)sum1[i]*(uli)sum1[i];
    }
}
int main()
{
    memset(sum,0,sizeof sum);
    seive();
    int t,a,b,cs=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        printf("Case %d: %llu\n",++cs,sum[b]-sum[a-1]);
    }
}
