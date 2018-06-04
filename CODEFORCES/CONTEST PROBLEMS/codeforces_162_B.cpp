#include<bits/stdc++.h>
using namespace std;

long long ara[100010];

int main()
{
    int n;
    while(cin>>n)
    {
        long long sum=0;

        for(int i=0;i<n;i++)cin>>ara[i];
        sum=ara[0]+1;
        long long value=ara[0];
        for(int i=1;i<n;i++){
            if(ara[i]>=value){
                sum+=ara[i]-value+2;
            }
           else{
            sum+=value-ara[i]+2;
           }
           value=ara[i];
         //  cout<<value<<' '<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}
