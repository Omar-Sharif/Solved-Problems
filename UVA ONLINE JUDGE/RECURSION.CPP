#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int m;
    if(n==1||n==0)m=1 ;
    else {
      m=n*fact(n-1);
    }
    cout<<m<<endl;
    return m;
}
int main()
{
    int n;
    while(cin>>n){
        cout<<fact(n)<<endl;
    }
    return 0;
}
