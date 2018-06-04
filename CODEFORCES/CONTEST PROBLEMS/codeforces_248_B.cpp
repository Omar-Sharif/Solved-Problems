#include<bits/stdc++.h>
using namespace std;
long long ara[100010];
long long ara1[100010];
int main()
{
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>ara[i];
            ara1[i]=ara[i];
        }

        sort(ara1+1,ara1+n+1);
        long long sum=0,sum1=0;
        for(int i=1;i<=n;i++){
            sum+=ara[i];
            sum1+=ara1[i];
            ara[i]=sum;
            ara1[i]=sum1;
           // cout<<ara[i]<<' '<<ara1[i]<<endl;
        }
        int m,g,h,k;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>g>>h>>k;

            if(g==1){
                if(h==1)cout<<ara[k]<<endl;
                else cout<<ara[k]-ara[h-1]<<endl;
            }
            else{
                if(h==1)cout<<ara1[k]<<endl;
                else cout<<ara1[k]-ara1[h-1]<<endl;
            }
        }
    }
}
