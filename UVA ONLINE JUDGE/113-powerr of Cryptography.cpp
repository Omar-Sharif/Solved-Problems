#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,p,k;

    while(scanf("%lf%lf",&n,&p)==2){
        k=pow(p,1/n);
        printf("%0.lf\n",k);
    }
    return 0;
}
