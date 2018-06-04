#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n+1],count=0;
    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(5-ara[i]>=k)
            count++;
    }
    cout<<count/3<<endl;
}
