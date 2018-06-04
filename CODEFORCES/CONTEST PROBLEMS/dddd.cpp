#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,n,m;

    while(cin>>a>>b>>c){
        d=sqrt((b*b)-4*a*c);
        n=(-b+d)/(2*a);
        m=(-b-d)/(2*a);
        //cout<<n<<' '<<m<<endl;
        if(n<m){
            cout<<fixed<<setprecision(8)<<m<<endl<<n<<endl;
            //printf("%.8lf \n%.8lf\n",n,m);
        }
        else{
            cout<<fixed<<setprecision(8)<<n<<endl<<m<<endl;
            //printf("%.8lf \n%.8lf\n",m,n);
        }
    }
}
