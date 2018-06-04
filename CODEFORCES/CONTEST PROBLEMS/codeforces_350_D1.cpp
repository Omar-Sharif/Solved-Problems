#include<bits/stdc++.h>
using namespace std;
int ara[1010];
int ara1[1010];

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int mx=0;
        for(int i=1;i<=n;i++)cin>>ara[i];
        for(int i=1;i<=n;i++){
            cin>>ara1[i];
            mx=max(mx,ara1[i]);
        }
        mx+=k;
        int s=k;
        int flag=1;
        for(int j=mx;j>=0;j--){
                flag=1;
            for(int i=1;i<=n;i++){
                   // cout<<ara[i]<<' '<<ara1[i]<<' '<<j<<' '<<k<<endl;
                if(ara1[i]>=ara[i]*j)continue;
                if(ara[i]*j<=ara1[i]+k){
                    k-=ara[i]*j-ara1[i];
                }
                else{
                    k=s;
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                mx=j;
                break;
            }
            //cout<<j<<endl;
        }
       cout<<mx<<endl;
    }
}

