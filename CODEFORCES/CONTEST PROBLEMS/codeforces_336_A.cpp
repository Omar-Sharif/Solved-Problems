#include<bits/stdc++.h>
using namespace std;

int ara[110][3];

int main()
{
    int n,s;
    while(cin>>n>>s){
        for(int i=1;i<=n;i++)
            cin>>ara[i][0]>>ara[i][1];

        long long sum=0;
        sum=s-ara[n][0];
        if(sum<ara[n][1])
            sum+=ara[n][1]-sum;
        for(int i=n-1;i>=1;i--){
                sum+=ara[i+1][0]-ara[i][0];
            if(sum<ara[i][1])
                sum+=ara[i][1]-sum;
        }
        sum+=ara[1][0]-0;
        cout<<sum<<endl;
    }
}
