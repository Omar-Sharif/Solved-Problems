#include<bits/stdc++.h>
using namespace std;
int ara[110];
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>ara[i];

    int max=10010,k,b,sum;

    for(int i=1;i<=n;i++){
        sum=ara[i]*15;
        k=0;
        for(int j=1;j<=ara[i];j++){
            cin>>b;
            k+=b;
        }
        sum+=k*5;
        cout<<sum<<endl;
        if(sum<max)
            max=sum;
    }
    cout<<max<<endl;
}
