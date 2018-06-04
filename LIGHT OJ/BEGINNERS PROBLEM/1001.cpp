#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a;
        if(a>10)cout<<a-10<<' '<<10<<endl;
        else cout<<0<<' '<<a<<endl;
    }
}

