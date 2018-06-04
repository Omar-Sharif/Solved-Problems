#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    while(cin>>n){
        if(n==0)
            break;
        sum=0;

        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                sum+=__gcd(i,j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
