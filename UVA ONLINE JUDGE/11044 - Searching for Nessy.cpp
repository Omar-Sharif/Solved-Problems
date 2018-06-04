#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,i,j;
        cin>>n>>m;
        n=n-2;
        m=m-2;

        if(n%3==0)
            i=n/3;
        else
            i=n/3+1;
        if(m%3==0)
            j=m/3;
        else
            j=m/3+1;
        cout<<i*j<<endl;
    }
    return 0;
}
