#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int m;
    if(n==1)m=1;
    else if(n<=0)m=0;
    else{
        m=n+sum(n-1);
    }
    cout<<m<<endl;
    return m;
}
int main()
{
    int n;
    while(cin>>n){
        cout<<sum(n)<<endl;
    }
}
