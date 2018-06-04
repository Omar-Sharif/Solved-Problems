#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d,v,u,sum,sum1;
    int t;

    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>d>>v>>u;

        if(v>=u||v==0){
            cout<<"Case "<<i<<':'<<" can't determine"<<endl;
        }
        else{
            sum1=sqrt(u*u-v*v);
            sum=(d/sum1)-(d/u);
            cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<sum<<endl;
        }
    }
    return 0;
}
