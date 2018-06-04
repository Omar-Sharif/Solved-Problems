#include<bits/stdc++.h>
using namespace std;
long long ara[100010];

int main()
{
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++)cin>>ara[i];
        long long count=1,ma=1;

        for(int i=1;i<n;i++){
            if(ara[i-1]<ara[i])count++;
            else{
                ma=max(ma,count);
                count=1;
            }
        }
        ma=max(ma,count);
        cout<<ma<<endl;
    }
}
