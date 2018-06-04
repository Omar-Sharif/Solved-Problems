#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mx 100010
lli po,x,y;

lli check(lli p)
{
    lli z=(p/50);
    lli i=(z)%475;
    for(int j=1;j<=25;j++){
        i=(i*96+42)%475;
        lli d=26+i;
        if(d==po){
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    cin>>po>>x>>y;
    lli a,b,c=x,v;
    while(c>=y){
        c-=50;
    }
    c+=50;
    lli count=1;
    while(count<10000000){
        a=check(c);
        if(a==1){
            if(c<=x){
                cout<<0<<endl;
                break;
            }
            else{
                double z=(c-x)/100.0;
                z=ceil(z);
                cout<<z<<endl;
                return 0;
            }
        }
        c+=50;
        count++;
    }
}

