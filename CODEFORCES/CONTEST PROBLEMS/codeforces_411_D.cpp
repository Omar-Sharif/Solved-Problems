#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mod 1000000007

int main()
{
    string s;
    cin>>s;

    int l=s.size();

    lli sum=0,count=0;
    for(lli i=l-1;i>=0;i--){
        if(s[i]=='b')count++;
        if(s[i]=='a'){
            sum=(sum+(count)%mod)%mod;
            count=(count*2)%mod;
        }
    }
    cout<<sum<<endl;
}
