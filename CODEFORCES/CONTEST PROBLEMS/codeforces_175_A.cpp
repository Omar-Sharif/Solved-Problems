#include<bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    while(cin>>n>>k){
        int i=1,j;
        for(i=1;i<n-k;i++)
            cout<<i<<' ';
        for(j=n;j>=i;j--)
            cout<<j<<' ';
        cout<<endl;
    }
}
