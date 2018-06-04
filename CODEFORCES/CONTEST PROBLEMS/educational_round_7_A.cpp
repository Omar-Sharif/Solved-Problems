#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define nt int

int main()
{
    lli a,b,c,n,d,sum,sum1;

    while(cin>>n){
        sum=0,a=1;
        lli k=1;
        while(1){
            sum=(a*(a+1))/2;
            if(sum>=n)
                break;
            a++;
            k++;
        }
        //cout<<sum<<' '<<k<<endl;
        sum1=k*(k-1)/2;
        //cout<<sum1<<endl;
        cout<<n-sum1<<endl;
    }

}
