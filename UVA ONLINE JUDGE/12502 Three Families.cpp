#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--){
        int x,y,z,sum,sum1;
        cin>>x>>y>>z;
        x=x*60,y=y*60;
        sum1=(x+y)/3;

        x=x-sum1;
        y=y-sum1;

        sum=(x*z)/(x+y);

        if(sum<1)
            sum=0;

        cout<<sum<<endl;
    }
    return 0;
}
