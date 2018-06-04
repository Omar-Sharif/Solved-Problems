#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sum=0,sum1=0,i,j,k,c;
    cin>>n>>x;
    c=x;
    long long int ara[n];
    for(i=0;i<n;i++){
        cin>>j;
        ara[i]=j;
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++){
        sum1+=c*ara[i];
        if(c==1)c=1;
        else c=c-1;
    }
    cout<<sum1<<endl;
    return 0;
}

