#include<bits/stdc++.h>
using namespace std;

#define mx 1000010
#define lli long long
vector<int>v;
bool vis[mx];

void seive()
{
    vis[1]=1;
    for(int i=4;i<mx;i+=2)vis[i]=1;

    for(int i=3;i<sqrt(mx);i+=2){
        if(vis[i]==1)continue;
        for(int j=i*i;j<mx;j+=2*i){
            vis[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3;i<mx;i+=2){
        if(vis[i]==0){
            v.push_back(i);
        }
    }
}

lli process(lli n)
{
    lli sum=1;
    //cout<<n<<' ';
    for(int i=0;v[i]<=sqrt(n);i++){
        if(n%v[i]==0){
            lli count=1;
            while(n%(lli)v[i]==0){
                count++;
                n/=v[i];
            }
            sum*=count;
        }
    }
    if(n!=1)sum*=2;
    sum--;
   //cout<<sum<<endl;
    return sum;
}
int main()
{   seive();
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        lli n;
        scanf("%lld",&n);
        printf("Case %d: %lld\n",++cs,process(n));
    }
}
