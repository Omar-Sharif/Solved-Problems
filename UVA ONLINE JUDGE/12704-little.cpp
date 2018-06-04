#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,r,t;
    double r1,r2,l,s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin >> x >>y >>r;
        r1=x*x+y*y;
        r2=sqrt(r1);
        l=r+r2;
        s=r-r2;
        printf("%.2lf %.2lf",l,s);
    }

}
