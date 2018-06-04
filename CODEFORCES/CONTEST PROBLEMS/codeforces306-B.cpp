#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,l,r,x,sum,sum1,sum2,count;

    while(cin>>n>>l>>r>>x){
        long long ara[n+1];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        count=0;
        long long a,b,c,d;
        for(int i=0;i<n;i++){
            sum=ara[i];
            a=ara[i];
            while()
            for(int j=i+1;j<n;j++){
                if(ara[j]-a>=x){
                    sum+=ara[j];
                    a=ara[j];
                }
            }
        }
    }
}
