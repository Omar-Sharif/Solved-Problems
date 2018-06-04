#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        double a,b,c,sum,sum1,k,l;
        scanf("%lf%lf%lf",&a,&b,&c);
        k=a*a+b*b;
        sum1=sqrt(k);
        l=sum1*sum1+c*c;
        sum=sqrt(l);
        printf("%0.2lf\n",sum);

    }
}
