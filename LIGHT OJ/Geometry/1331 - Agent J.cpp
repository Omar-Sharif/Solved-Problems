#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--){
        double A1,A2,A3,a1,a2,a3,r1,r2,r3,c1,c2,c3;
        cin>>r1>>r2>>r3;

        A1=pi*r1*r1;
        A2=pi*r2*r2;
        A3=pi*r3*r3;

        a1=r1+r2,a2=r2+r3,a3=r3+r1;
        c1=acos((a1*a1+a3*a3-a2*a2)/(2*a1*a3));
        c2=acos((a1*a1+a2*a2-a3*a3)/(2*a1*a2));
        c3=acos((a3*a3+a2*a2-a1*a1)/(2*a3*a2));
        c1/=2*pi,c2/=2*pi,c3/=2*pi;

        double s=(a1+a2+a3)/2;
        double area=s*(s-a1)*(s-a2)*(s-a3);
        area=sqrt(area);
        area=area-(A1*c1)-(A2*c2)-(A3*c3);
        printf("Case %d: %.10lf\n",++cs,area);

    }
}
