#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,n,m;
    while(cin>>n>>m)
    {
        d=n*pow(1.000000011,m);
        cout<<fixed<<setprecision(8)<<d<<endl;
        printf("%.8lf\n",d);
    }
}

