#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    int c;
    cin>>c;
    while(c--){
        lli p,q,b,x=0,y,v;
        scanf("%lld %lld %lld",&p,&q,&b);
        if(p==0){
           printf("Finite\n");
        }
        else{
           int count=0,flag=0;
           while(p>=0){
                if(p%q==0){
                    flag=1;
                    break;
                }
                p*=b;
           }
           if(flag==1) printf("Finite\n");
           else printf("Infinite\n");
        }
    }
}
