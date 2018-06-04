#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long

int main()
{
    double d1,d2,k;
    cin>>d1>>d2>>k;

    while(k>0){
        if(d1<=d2)d1++;
        else d2++;
        k--;
    }
   // cout<<d1<<' '<<d2<<endl;
    printf("%.10lf\n",(d1*d2)/2);
    return 0;
}

