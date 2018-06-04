#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,m,sum;

    while(cin>>n){
        m=(n+1)/2;
        k=m*m;
        sum=((k-1)*2)+((k-2)*2)+((k-3)*2)+3;
        cout<<sum<<endl;
    }
    return 0;
}

