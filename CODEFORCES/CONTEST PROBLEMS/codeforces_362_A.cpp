#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,s,x,a;
    while(cin>>t>>s>>x)
    {
        if(x==t)cout<<"YES"<<endl;
        else if(x<t)cout<<"NO"<<endl;
        else{
            x-=t;
            if(x<s)cout<<"NO"<<endl;
            else if(x%s==0 or x%s==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
