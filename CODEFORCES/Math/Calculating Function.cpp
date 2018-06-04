#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,sum;
    while(cin>>n)
    {
        if(n%2==0)
            cout<<n-n/2<<endl;
        else
            cout<<(-1)*n+n/2<<endl;
    }
    return 0;
}
