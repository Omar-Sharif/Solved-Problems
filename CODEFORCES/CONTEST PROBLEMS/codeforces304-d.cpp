#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,t,sum=1;
    scanf("%lld",&t);
    scanf("%lld%lld",&a,&b);

    for(i=a;i>b;i--){
        sum*=i;
    }
    long long y=2;
    while(sum>0){
        if(sum%y==0){
            sum/=y;
        }
        else {
            y++;
        }
    }
}
