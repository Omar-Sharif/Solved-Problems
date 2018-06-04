#include<bits/stdc++.h>
using namespace std;
long long a,b,c,x,y,z,sum,p1,p2,coun;
int main()
{
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    p1=0,p2=0;
    coun=0;
    if(a>x){
            p1=a-x;
            coun+=p1/2;
    }
    else p2+=x-a;
    if(b>y){
            p1=b-y;
            coun+=p1/2;
    }
    else p2+=y-b;
    if(c>z){
            p1=c-z;
            coun+=p1/2;
    }
    else p2+=z-c;

    if(coun>=p2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
