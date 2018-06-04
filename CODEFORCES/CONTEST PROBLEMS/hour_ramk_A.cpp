#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,c;
    while(cin>>t)
    {
        c=1;
        n=3;
        while(n<t){
            c++;
            t-=n;
            n*=2;
        }
        //cout<<n<<endl;
        cout<<n-t+1<<endl;
    }
}
