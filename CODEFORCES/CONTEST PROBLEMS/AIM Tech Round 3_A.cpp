#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define lli long long
int ara[mx];
int main()
{
    long long n,b,d,sum,count;
    while(cin>>n>>b>>d)
    {
        sum=0,count=0;
        for(int i=0;i<n;i++)cin>>ara[i];


        for(int i=0;i<n;i++){
            if(ara[i]>b)continue;
            sum+=ara[i];
            if(sum>d){
                sum=0;
                count++;
            }
        }

        cout<<count<<endl;

    }
}
