#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[2000010],n,sum,m,x,mi;
int main()
{
    while(cin>>n){
        m=1,x=1;

        for(int i=1;i<=n;i++){
            cin>>ara[i];
        }

        mi=ara[m];

        for(int i=1;i<=n;i++){
            if(ara[i]<ara[m]){
                m=i;
                x=i;
                mi=ara[i];
            }
            else if(ara[i]==ara[m]){
              m=i;
               mi=ara[i];
            }
        }
        ll mx=0,t;
        for(int i=1;i<=n;i++){
                t=0;
            if(ara[i]==mi){
                ll count=0;
                for(int j=i-1;j>=1;j--){
                    if(ara[j]==mi)
                        break;
                    else count++;
                }

                ll count2=0;

                for(int j=n;j>i;j--){
                    if(ara[j]==mi)
                        break;
                    else count2++;
                }
              // cout<<count<<' '<<count2<<endl;
            if(i!=x) t=count;
            else t=count+count2;
            }
            mx=max(mx,t);
        }
       // cout<<mx<<endl;
        cout<<mi*n+mx<<endl;
    }
}

