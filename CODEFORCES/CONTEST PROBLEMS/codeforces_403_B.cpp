#include<bits/stdc++.h>
using namespace std;

#define mx 60010
#define lli long long

double x[mx],v[mx];
int n;

double check(double mid)
{
    double sum=0,s;
    for(int i=1;i<=n;i++){
        //cout<<mid<<' '<<x[i]<<' '<<v[i]<<endl;
        s=double(abs(mid-x[i]))/double(v[i]);
        //cout<<s<<endl;
        sum=max(sum,s);
    }
    return sum;
}
int main()
{
    cin>>n;

    for(int i=1;i<=n;i++)cin>>x[i];
    for(int i=1;i<=n;i++)cin>>v[i];

    double low=0,high=1000000000,res=100000000000,mid,mid2,d,d1;

    int c=200;

    while(c--){
        mid=(low+high)/2;
        mid2=mid+.0000001;
        d=check(mid);
        d1=check(mid2);

        //cout<<d<<' '<<d1<<endl;
        if(d<d1){
                res=min(res,d);
                high=mid;
        }
        else{
            res=min(res,d1);
            low=mid;
        }
       // cout<<d<<' '<<d1<<endl;
        //break;
       // break;
    }
    printf("%.09lf\n",res);
}

