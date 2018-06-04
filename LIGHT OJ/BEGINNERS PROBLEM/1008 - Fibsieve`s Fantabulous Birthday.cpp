#include<bits/stdc++.h>
using namespace std;

long long s,value,n;

int main()
{
    int t,cas=0;
    cin>>t;

    while(t--){
        scanf("%lld",&s);
        long long i,r,c;

        n=ceil(sqrt(s));
        value=(n-1)*(n-1);

        //cout<<n<<' '<<value<<endl;

        if(n%2==0){
            if(s<=value+n){
                r=n;
                c=s-value;
            }
            else{
                c=n;
                r=n*n-s+1;
            }
        }
        else{
            if(s<=value+n){
                c=n;
                r=s-value;
            }
            else{
                r=n;
                c=n*n-s+1;
            }
        }
        printf("Case %d: %lld %lld\n",++cas,c,r);
        //cout<<"row "<<r<<endl<<"column "<<c<<endl;

    }
}
