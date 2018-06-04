#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

int main()
{
    lli x,sum,n,a,b,c;

    while(cin>>n>>a>>b>>c){
        x=0;

        lli v1,v2,v3;

        v1=a;
        v2=min(b,2*v1);
        v3=min(c,min(v1+v2,3*v1));

        lli p,q,r,s;
        int c=1;
        lli sum1=100000000000000000000;
        q=ceil(n/4.0);
        q=q*4-n;
        for(lli i=q;;i+=4){
            if(c>100000)break;
                c++;
            x=i;
            sum=0;

            p=x/3;
            sum+=(v3*p);
            x=x%3;

            p=x/2;
            sum+=(v2*p);
             x=x%2;
            p=x/1;
            sum+=(v1*p);

          // cout<<sum1<<' '<<sum<<endl;
            if(sum<sum1)sum1=sum;
        }
        if(n%4==0)sum1=0;
        cout<<sum1<<endl;



    }
}
