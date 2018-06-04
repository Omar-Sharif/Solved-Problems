#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,b,h,w;
    while(cin>>n>>b>>h>>w)
    {
        long long sum=LONG_MAX,m,flag=0,flag1,i,j,k;
        for(j=1;j<=h;j++){
            long long  p;
            cin>>p;
            flag1=0;
            long long ara[w],i;
            for(i=0;i<w;i++){
                cin>>ara[i];
            }
            if(p*n<=b){
                sort(ara,ara+w);
                for(i=0;i<w;i++){
                    if(ara[i]>=n){
                        flag1=1;
                        break;
                    }
                }
                if(n*p<=b&&flag1==1){
                    if(n*p<sum)
                        sum=n*p;
                        flag=1;
                }
            }
        }
        if(flag==1)
            cout<<sum<<endl;
        else
            cout<<"stay home"<<endl;

    }
    return 0;
}
