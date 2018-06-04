#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--){
        double r,s;
        cin>>r;
        s=(4-pi)*(r*r);
        printf("Case %d: %.2lf\n",++cs,s);
    }
}
