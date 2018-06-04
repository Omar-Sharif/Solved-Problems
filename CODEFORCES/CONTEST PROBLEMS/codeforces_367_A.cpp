#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,f,b,c,x1,x2,y1,y2,v,s1,n;
    while(cin>>x1>>y1){
        cin>>n;
        f=100000000;
        for(int i=0;i<n;i++){
            cin>>x2>>y2>>v;
            a=abs(x2-x1)*abs(x2-x1);
            b=abs(y2-y1)*abs(y2-y1);
            s1=sqrt(a+b);
            s1=(s1/v);
            f=min(f,s1);
        }
        printf("%.15lf\n",f);
    }
}
