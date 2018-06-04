#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a,b,c,d,n,sum;

    while(cin>>n){
            sum=0;
        for(int i=5;i<=7;i++)
        {
            a=1;
            for(int j=1;j<=i;j++){
                a*=(n-j+1);
                a/=j;
            }
            //cout<<a<<endl;
            sum+=a;
        }
        cout<<sum<<endl;
    }
}


