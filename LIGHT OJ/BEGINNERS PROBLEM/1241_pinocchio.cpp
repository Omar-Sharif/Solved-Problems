#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno=0;
    cin>>t;
    while(t--){
        int n,count=0;
        double m;
        cin>>n;
        double ara[n+1],b=2;

        for(int i=0;i<n;i++){
            cin>>ara[i];
            count+=ceil((ara[i]-b)/5);
            b=ara[i];
        }

        printf("Case %d: %d\n",++caseno,count);
    }
}
