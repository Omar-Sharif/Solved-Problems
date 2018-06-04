#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m,k;
int main()
{
    int t,caseno=0;
    cin>>t;
    while(t--){
        cin>>n;
        k=1;m=n;
        if(n%2!=0){
            printf("Case %d: Impossible\n",++caseno);
        }
        else{
            while(n%2==0){
                k*=2;
                n/=2;
            }
            printf("Case %d: %lld %lld\n",++caseno,n,k);
        }
    }
}
