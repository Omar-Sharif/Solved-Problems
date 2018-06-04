#include<bits/stdc++.h>
using namespace std;
#define lli long long

int check(lli n)
{
    int flag=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    lli n,ans,m;
    while(cin>>n){
        if(n==2)ans=1;
        else if(n%2==0)ans=2;
        else{
            if(check(n))ans=1;
            else if(check(n-2))ans=2;
            else ans=3;
        }
        cout<<ans<<endl;
    }
}
