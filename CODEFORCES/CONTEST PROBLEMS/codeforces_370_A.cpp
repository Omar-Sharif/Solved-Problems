#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
lli ara[mx],ara1[mx];

int main()
{
    lli n;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>ara[i];
        }
        lli sum=0,c=1;
        for(int j=n;j>=1;j--){
                cout<<ara[j]<<' '<<sum<<endl;
            ara1[j]=ara[j]-sum;
            if(c==1){
                sum-=ara1[j];
                c=0;
            }
            else if(c==0){
                sum+=ara1[j];
                c=1;
            }
        }
        for(int i=1;i<=n;i++){
            if(i==n)cout<<ara1[i]<<endl;
            else cout<<ara1[i]<<' ';
        }
    }
}

