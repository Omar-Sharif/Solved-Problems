#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x1,x2,y1,y2,sum;

    while(cin>>x1>>y1>>x2>>y2)
    {
        long long a,b,c,d,v1,v2,v3,v4;

        a=abs(x2-x1)+1;
        //cout<<a<<endl;
        v1=ceil(abs(y2-y1)/2);
        //cout<<v1<<endl;
        v2=(abs(y2-y1)/2)+1;
        //cout<<v2<<endl;
        c=a/2;d=a-c;
        //cout<<c<<' '<<d<<endl;
        sum=0;
      //  if(y1%2==0)sum+=(v2*c+v1*d);
        sum+=(v1*c+v2*d);
        cout<<sum<<endl;


    }
}
