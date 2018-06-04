#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,x1,x2,t1,t2,p,d,a,b,c,mx1,mx2;
    while(cin>>s>>x1>>x2){
        cin>>t1>>t2>>p>>d;

        mx2=abs(x1-x2)*t2;

        if(x1<x2 and d==1){
            if(p<=x1) c=x2-p;
            if(p>x1)c=2*s-p+x2;
        }
        else if(x1<x2 and d==-1){
            c=p+x2;
        }
        else if(x1>x2 and d==1){
            c=s-x2+s-p;
        }
        else if(x1>x2 and d==-1){
            if(p>=x1)c=p-x2;
            if(p<x1)c=p+s+s-x2;
        }
        mx1=c*t1;
       // cout<<c<<' '<<mx1<<' '<<mx2<<endl;
        cout<<min(mx1,mx2)<<endl;
    }
}
