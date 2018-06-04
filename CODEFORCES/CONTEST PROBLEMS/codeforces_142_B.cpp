#include<bits/stdc++.h>
using namespace std;
#define mx 1000010
#define lli long long

int ara[100010];
lli vis[mx],x;

void seive()
{
    memset(vis,0,sizeof vis);
    vis[1]=1;

    for(int i=4;i<mx;i+=2)vis[i]=1;
    for(int i=3;i<sqrt(mx);i+=2){
        if(vis[i]==1)continue;
        for(int j=i*i;j<mx;j+=2*i){
            vis[j]=1;
        }
    }
}

int main()
{
    seive();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        double a=sqrt(x);

        if(floor(a)==ceil(a) and vis[int(a)]==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
