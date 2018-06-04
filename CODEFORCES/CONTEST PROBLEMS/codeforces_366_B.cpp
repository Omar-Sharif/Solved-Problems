#include<bits/stdc++.h>
using namespace std;

long long ara[100010];
int main()
{
    long long n,count;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)cin>>ara[i];
        long long c=2;

        for(int i=0;i<n;i++){
            if(ara[i]%2==0){
                if(c==1)c=2;
                else c=1;
            }
            cout<<c<<endl;
        }
    }
}
