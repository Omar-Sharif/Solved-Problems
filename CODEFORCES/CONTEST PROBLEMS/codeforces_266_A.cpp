#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,value,s;

    while(cin>>n>>m>>a>>b)
    {
        long long max=INFINITY;
        for(int i=0;;i++){
            s=n-i*m;
            if(s<0)s=0;
            value=s*a+i*b;
            //cout<<s<<' '<<value<<endl;
            if(value<max)
                max=value;
            if(s<=0)
                break;
        }
        cout<<max<<endl;
    }
}
