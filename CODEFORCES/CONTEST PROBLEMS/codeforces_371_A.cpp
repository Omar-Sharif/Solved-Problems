#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010

int main()
{
    lli l1,r1,l2,r2,k,a,b,c,sum;
    while(cin>>l1>>r1>>l2>>r2>>k)
    {
        a=min(r1,r2);
        b=max(l1,l2);
        if(k>=b and k<=a){
            sum=a-b;
        }
        else sum=a-b+1;
        if(sum<0)sum=0;
        cout<<sum<<endl;

    }
}
