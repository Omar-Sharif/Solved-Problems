#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long min=(n+1)*30000;
        long long ara[n];

        for(int i=0;i<n;i++)
            cin>>ara[i];

        for(int i=0;i<n;i++){
              long long sum=0;
            for(int j=0;j<n;j++){
                    sum+=abs(ara[i]-ara[j]);
            }
            if(sum<min)
                min=sum;
        }
        cout<<min<<endl;
    }
    return 0;
}
