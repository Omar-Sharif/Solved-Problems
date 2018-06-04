#include<bits/stdc++.h>
using namespace std;

long long ara[100];

void check()
{
    long long ans=1;
    for(int i=1;i<=55;i++){
        ara[i]=ans;
        ans*=2;
    }
}

int main()
{
    long long n,m,ans;
    check();
    while(cin>>n>>m){
        for(int i=55;i>=1;i--){
            if(m%ara[i]==0){
                ans=i;
                break;
            }
        }
    cout<<ans<<endl;
    }

}
