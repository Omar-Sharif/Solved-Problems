#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,n,x,m,y,sum1=0,sum2=0;
    cin>>n>>x;

    for(int i=n-1;i>=0;i--){
        cin>>a;
        sum1+=pow(x,i)*a;
    }
    cin>>m>>y;

    for(int i=m-1;i>=0;i--){
        cin>>a;
        sum2+=pow(y,i)*a;
    }

    if(sum1==sum2)
        cout<<'='<<endl;
    else if(sum1<sum2)
        cout<<'<'<<endl;
    else
        cout<<'>'<<endl;
}
