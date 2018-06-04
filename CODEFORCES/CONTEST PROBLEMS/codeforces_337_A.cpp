#include<bits/stdc++.h>
using namespace std;
long long n,m;
int main()
{
    while(cin>>n){
        if(n%2!=0)
            cout<<0<<endl;
        else{
            m=(n/2)-(n/4)-1;
            cout<<m<<endl;
        }
    }
}
