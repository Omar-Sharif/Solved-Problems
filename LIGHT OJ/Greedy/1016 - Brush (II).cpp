#include<bits/stdc++.h>
using namespace std;

#define lli long long
lli ara[50010],n,w,x,y;
lli func()
{
    lli b=ara[0]+w,c=1;
    for(int i=0;i<n;i++){
        if(ara[i]<=b)continue;
        b=ara[i]+w;
        c++;
    }
    return c;
}

int main()
{
    lli t,cas=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&n,&w);

        for(int i=0;i<n;i++){
           scanf("%lld %lld",&x,&ara[i]);
        }
        sort(ara,ara+n);
        printf("Case %lld: %lld\n",++cas,func());
    }

}
