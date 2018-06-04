#include<bits/stdc++.h>
using namespace std;

#define lli long long

int main()
{
    lli count=0,a,b;
    cin>>a>>b;

    while(a<=b){
        a*=3;
        b*=2;
        count++;
    }
    cout<<count<<endl;
}
