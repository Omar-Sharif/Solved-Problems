#include<bits/stdc++.h>
using namespace std;
long long n,sum;
int ara[200010];
int ara1[200010];
int main()
{
    while(cin>>n){
            sum=0;
        for(int i=1;i<=n;i++){
            cin>>ara[i];
            ara1[ara[i]]=i;
        }

        for(int i=1;i<n;i++){
                //cout<<ara1[i+1]<<' '<<ara1[i]<<endl;
            sum+=abs(ara1[i+1]-ara1[i]);
        }
        cout<<sum<<endl;
    }
}
