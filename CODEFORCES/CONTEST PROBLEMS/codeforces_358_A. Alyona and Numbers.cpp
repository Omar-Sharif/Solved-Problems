#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,v;
    while(cin>>n>>m)
    {
        v=0;
        for(int i=1;i<=n;i++){
            v+=(m+(i%5))/5;
        }
        cout<<v<<endl;
    }
}
