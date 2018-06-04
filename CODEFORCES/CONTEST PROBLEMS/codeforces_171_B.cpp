#include<bits/stdc++.h>
using namespace std;
int ara[100010];

int main()
{
    long long n,s,sum,su;
    while(cin>>n>>s)
    {
        for(int i=1;i<=n;i++)cin>>ara[i];

        int j,c,count=0;
        j=1;sum=0;
        for(int i=1;i<=n;i++){
            while(j<=n and sum+ara[j]<=s){
                sum+=ara[j];
                j++;
            }
            //cout<<j<<' '<<sum<<endl;
            c=j-i;
            //cout<<c<<endl;
            count=max(count,c);
            sum-=ara[i];
        }
        cout<<count<<endl;

    }
}
