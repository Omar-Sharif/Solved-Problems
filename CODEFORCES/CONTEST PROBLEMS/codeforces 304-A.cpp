#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,w,k;

    while(cin>>k>>n>>w){
        long long sum=0,sum1;
        sum=(w*(w+1))/2;
        sum1=sum*k;
        if(sum1-n>0)
            cout<<sum1-n<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}
