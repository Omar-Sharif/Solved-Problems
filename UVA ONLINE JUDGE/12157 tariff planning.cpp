#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int sum=0,sum1=0;
        for(int j=1;j<=n;j++){
            int a;
            cin>>a;
            sum+=(a/30+1)*10;
            sum1+=(a/60+1)*15;
        }
        if(sum<sum1)
            cout<<"Case "<<i<<": Mile "<<sum<<endl;
        else if(sum>sum1)
            cout<<"Case "<<i<<": Juice "<<sum1<<endl;
        else
            cout<<"Case "<<i<<": Mile Juice "<<sum<<endl;
    }
    return 0;
}
