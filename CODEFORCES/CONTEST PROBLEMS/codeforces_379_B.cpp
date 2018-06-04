#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,a,b,c,d;
    while(cin>>a>>b>>c>>d){
        long long sum=0;
        x=min(a,min(c,d));
        sum=x*256;
        y=a-x;
        x=min(y,b);
        sum+=(x*32);
        cout<<sum<<endl;
    }
}

